#include "symtable.h"
#include <stdio.h>
#include <string.h>

extern int yylineno;

void printError(char* format, ...) {
    printf("Linea %d: Error semantico - ", yylineno);
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    printf("\n");
    va_end(args);
}

void initBaseTypes(){
    typeInt = typeInfo_create(t_INT);
    typeChar = typeInfo_create(t_CHAR);
    typeVoid = typeInfo_create(t_VOID);
    typeFloat = typeInfo_create(t_FLOAT);
    typeDouble = typeInfo_create(t_DOUBLE);
    typeString = typeInfo_create(t_PTR); typeString->next = typeChar;
    typeError = typeInfo_create(t_ERROR);
}

symtable *symtable_create(){
    symtable *self = malloc(sizeof(symtable));
    self->elems = list_create();
    return self;
}

typeInfo *typeInfo_create(typeName type){
    typeInfo *self = malloc(sizeof(typeInfo));
    self->type = type;
    self->next = NULL;
    self->params = NULL;
    self->isDefined = false;
    return self;
}

void typeInfo_destroy(typeInfo *self){
    if(self == NULL) return;
    if(self->next != NULL) typeInfo_destroy(self->next);
    list_destroy(self->params);
    free(self);
}

void typeInfo_append(typeInfo **self, typeInfo *next){
    if(*self == NULL){
        *self = next;
        return;
    }
    typeInfo_append(&((*self)->next), next);
}

bool sameParamTypes(t_list* left, t_list* right){
    int i = 0;
    bool _matchesParamType(void* elem){
        symbol* param = list_get(left, i);
        i++;
        if(typeInfo_match(param->type, ((symbol*)elem)->type)){
            return true;
        }
        return false;
    };
    return list_all_satisfy(right, _matchesParamType);
}

bool typeInfo_match(typeInfo *left, typeInfo *right){
    if(left == NULL && right == NULL) return true;
    if(left == NULL || right == NULL) return false;
    if(left->type != right->type) return false;
    if(left->type == right->type && left->type != t_FUNC) return typeInfo_match(left->next, right->next);
    if(left->type == right->type && left->type == t_FUNC){
        if(list_size(left->params) == list_size(right->params)){
            if(sameParamTypes(left->params, right->params)) return typeInfo_match(left->next, right->next);
        }
    }
    return false;
}

void symtable_destroy(symtable *self){
    void _symbol_destroy(void *elem){
        symbol_destroy((symbol*) elem);
    };
    list_destroy_and_destroy_elements(self->elems, _symbol_destroy);
    free(self);
}

symbol *symbol_create(){
    symbol *self = malloc(sizeof(symbol));
    self->identifier =NULL;
    self->type = NULL;
    return self;
}

void symbol_destroy(symbol *self){
    free(self->identifier);
    typeInfo_destroy(self->type);
    free(self);
}

symbol *symtable_lookup(symtable *self, char *identifier){
    bool matchIdentifier(void *elem){
        return !strcmp(((symbol*)elem)->identifier, identifier);
    };
    return list_find(self->elems, matchIdentifier);
}

bool symtable_isPresent(symtable *self, char *identifier){
    symbol* encontrado = symtable_lookup(self, identifier);
    return encontrado != NULL;
}

void symtable_addSymbol(symtable *self, symbol *elem){
    if(symtable_isPresent(self, elem->identifier)){
        printError("El simbolo %s ya esta declarado", elem->identifier);
        return;
    }
    list_add(self->elems, elem);
}

void symtable_addSymbols(symtable *self, t_list *elems){
    void _addSymbol(void *elem){
        symtable_addSymbol(self, (symbol*) elem);
    };
    list_iterate(elems, _addSymbol);
}

void checkParamNames(t_list* declared, t_list* defined, symtable* self){
    int i = 0;
    void checkParamName(void* elem){
        symbol* param = list_get(declared, i);
        symbol* definedParam = (symbol*) elem;
        i++;
        if(definedParam->identifier == NULL){
            printError("El parametro %i debe tener un identificador", i);
        }
        else if(param->identifier != NULL){
            if(strcmp(param->identifier, definedParam->identifier)){
                printError("El parametro %i debe tener el mismo nombre que en la declaracion", i, param->identifier);
            }
        }
        else if(param->identifier == NULL){
            symtable_addSymbol(self, definedParam);
        }
    };
    return list_iterate(defined, checkParamName);
}

void symtable_functionDefinition(symtable *self, symbol* func){
    symbol* previousDeclaration = symtable_lookup(self, func->identifier);
    if (previousDeclaration != NULL){
        if(!typeInfo_match(previousDeclaration->type, func->type)){
            printError("El simbolo %s ya esta declarado como otro tipo", func->identifier);
            return;
        }
        else if(previousDeclaration->type->isDefined){
            printError("El simbolo %s corresponde a una funcion ya definida", func->identifier);
            return;
        }
        else {
             checkParamNames(previousDeclaration->type->params, func->type->params, self);
             func->type->isDefined = true;
             return;
        }
    }
    else {
        symtable_addSymbol(self, func);
        func->type->isDefined = true;
        
        bool isNamedParam(void* elem){
            return ((symbol*)elem)->identifier != NULL;
        };
        if(!list_all_satisfy(func->type->params, isNamedParam)){
            printError("Todos los parametros de la definicion de funcion deben llevar un identificador");
        }
        t_list* namedParams = list_filter(func->type->params, isNamedParam);
        symtable_addSymbols(self, namedParams);
    }
}

// Funciones para printear por pantalla la tabla de simbolos

void symtable_print(symtable *self){
    void _symbol_print(void *elem){
        symbol_print((symbol*) elem);
    };
    printf("\nDump de Tabla de Simbolos:\n");
    printf("-------------------------\n");
    list_iterate(self->elems, _symbol_print);
}

void symbol_print(symbol *self){
    printf("%s: ", self->identifier);
    typeInfo_print(self->type);
    printf("\n");
}

static char* typePrints[] = {"void", "char", "int", "float", "double", "puntero a ", "array de ", "funcion "};

void typeInfo_print(typeInfo *self){
    if(self == NULL){
        return;
    }
    printf("%s", typePrints[self->type]);
    void _parameterPrint(void *elem){
        typeInfo_print(((symbol*)elem)->type);
        printf(", ");
    };
    if(self->type == t_FUNC){
        if(list_is_empty(self->params)){
            printf("sin argumentos, ");
        }
        else{
            printf("con argumentos de tipo: ");
            list_iterate(self->params, _parameterPrint);
        }
        printf("y retorno de tipo: ");
    }
    typeInfo_print(self->next);
}
