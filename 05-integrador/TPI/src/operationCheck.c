#include "operationCheck.h"

extern int yylineno;

bool checkTypeError(typeInfo* type) {
    return type->type == t_ERROR;
}

bool checkTypeErrors(t_list* types) {
    bool _checkTypeError(void* elem){
        return checkTypeError((typeInfo*)elem);
    }
    list_any_satisfy(types, _checkTypeError);
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
    if(checkTypeError(func) || checkTypeErrors(argTypes)) return typeError;
    if(func->type == t_PTR && func->next->type == t_FUNC) func = func->next;
    if(func->type == t_FUNC) {
        if(list_size(argTypes) == list_size(func->params)) {
            if(/*Los tipos de dato en los argumentos == parametros */) {
                return left->next;
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