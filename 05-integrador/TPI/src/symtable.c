#include "symtable.h"
#include <stdio.h>

extern int yylineno;

symtable *symtable_create(){
    symtable *self = malloc(sizeof(symtable));
    self->elems = list_create();
    return self;
}

typeInfo *typeInfo_create(){
    typeInfo *self = malloc(sizeof(typeInfo));
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
        return ((symbol*)elem)->identifier == identifier;
    };
    return list_find(self->elems, matchIdentifier);
}

bool symtable_isPresent(symtable *self, char *identifier){
    return symtable_lookup(self, identifier) != NULL;
}

void symtable_addSymbol(symtable *self, symbol *elem){
    if(symtable_isPresent(self, elem->identifier)){
        printf("Linea %d: Error Semantico - El simbolo %s ya esta declarado\n", yylineno, elem->identifier);
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