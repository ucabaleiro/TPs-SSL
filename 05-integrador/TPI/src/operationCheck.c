#include "operationCheck.h"
#include "stdio.h"

extern int yylineno;

bool checkTypeError(typeInfo* type) {
    return type->type == t_ERROR;
}

bool checkTypeErrors(t_list* types) {
    bool _checkTypeError(void* elem){
        return checkTypeError((typeInfo*)elem);
    }
    return list_any_satisfy(types, _checkTypeError);
}

//------------------------------------------------------------------------------

typeInfo* reduceArray(typeInfo* left, typeInfo* right){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;

    if(left->type == t_ARRAY || left->type == t_PTR) {
        if(right->type == t_INT) {
            return left->next;
        }
        else {
            printError("La expresion entre [ ] debe ser int");
            return typeError;
        }
    }
    else {
        printError("La expresion a izquierda de los [ ] debe ser un array o puntero");
        return typeError;
    }
}

typeInfo* reduceFunction(typeInfo* func, t_list* argTypes){
    int i = 0;
    bool _matchesParamType(void* elem){
        symbol* param = list_get(func->params, i);
        i++;
        if(typeInfo_match(param->type, (typeInfo*)elem)){
            return true;
        }
        printError("El argumento N#%i no tiene el mismo tipo que el parametro esperado:", i);
        printf("\tParametro esperado: ");
        typeInfo_print(param->type);
        printf("\n");
        printf("\tArgumento: ");
        typeInfo_print((typeInfo*)elem);
        printf("\n");
        return false;
    };

    if(checkTypeError(func) || checkTypeErrors(argTypes)) return typeError;
    if(func->type == t_PTR && func->next->type == t_FUNC) func = func->next;
    if(func->type == t_FUNC) {
        if(list_size(argTypes) == list_size(func->params)) {
            if(list_size(func->params) == 0 || list_all_satisfy(argTypes, _matchesParamType)) {
                return func->next;
            }
            else{
                return typeError;
            }
        }
        else {
            printError("La cantidad de argumentos debe ser igual a los parametros de la funcion");
            return typeError;
        }
    }
    else {
        printError("La expresion a izquierda de los ( ) debe ser una funcion o un puntero a funcion");
        return typeError;
    }
}

typeInfo* reduceIncrement(typeInfo* exp){
    if(checkTypeError(exp)) return typeError;
    if(exp->type == t_PTR || exp->type == t_INT || exp->type == t_CHAR || exp->type == t_FLOAT || exp->type == t_DOUBLE) {
        return exp->next;
    }
    else {
        printError("La expresion operando de un op. postfijo debe ser un puntero, entero o real");
        return typeError;
    }
}