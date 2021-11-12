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

bool isInteger(typeInfo* type) {
    return type->type == t_INT || type->type == t_CHAR;
}

bool isReal(typeInfo* type) {
    return type->type == t_INT || type->type == t_FLOAT || type->type == t_CHAR || type->type == t_DOUBLE;
}

bool isArithmetic(typeInfo* type) {
    return isReal(type);
}

bool isScalar(typeInfo* type) {
    return isArithmetic(type) || type->type == t_PTR;
}

bool isAggregate(typeInfo* type) {
    return  type->type == t_ARRAY;
}

bool isDerivedDeclarator(typeInfo* type) {
    return type->type == t_FUNC || type->type == t_PTR || type->type == t_ARRAY;
}

typeInfo* maxByRank(typeInfo* left, typeInfo* right) {
    if(left->type > right->type) return left;
    return right;
}

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
    if(isScalar(exp)) {
        return exp;
    }
    else {
        printError("La expresion operando de un ++ o -- debe ser de tipo escalar (enteros, flotantes o punteros)");
        return typeError;
    }
}

typeInfo* reduceDereferece(typeInfo* exp){
    if(checkTypeError(exp)) return typeError;
    if(exp->type == t_PTR) {
        return exp->next;
    }
    else {
        printError("El operando de un operador de indireccion (*) debe ser de tipo puntero");
        return typeError;
    }
}

typeInfo* reduceUnaryPlus(typeInfo* exp){
    if(checkTypeError(exp)) return typeError;
    if(isArithmetic(exp)) {
        return exp;
    }
    else {
        printError("El operando de un + o un - unario debe ser de tipo aritmetico");
        return typeError;
    }
}

typeInfo* reduceBitwiseNot(typeInfo* exp){
    if(checkTypeError(exp)) return typeError;
    if(isInteger(exp)) {
        return exp;
    }
    else {
        printError("El operando de la negacion bit a bit (~) debe ser de tipo entero");
        return typeError;
    }
}

typeInfo* reduceBitwise(typeInfo* left, typeInfo* right){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;
    if(isInteger(left) && isInteger(right)) return typeInt;
    
    printError("Ambos operandos de las operaciones binarias bit a bit deben ser de tipo entero.");
    return typeError;
}

typeInfo* reduceLogicalNot(typeInfo* exp){
    if(checkTypeError(exp)) return typeError;
    if(isScalar(exp)) return typeInt;
    printError("El operando de la negacion logica (!) debe ser de tipo escalar.");
    return typeError;
}

typeInfo* reduceSizeOf(typeInfo* exp){
    if(checkTypeError(exp)) return typeError;
    if(exp->type == t_FUNC || exp->type == t_VOID){
        printError("El operando de sizeof no puede ser de tipo void ni funcion.")
        return typeError;
    } 
    return typeInt;
}

typeInfo* reduceCast(typeInfo* type, typeInfo* exp){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;
    if (isScalar(exp) && (type->type == t_VOID || isScalar(type))) return type;
    printError("El operando de un casteo debe ser de tipo escalar y el nuevo tipo debe ser de tipo escalar o void.");
    return typeError;
}

typeInfo* reduceProduct(typeInfo* left, typeInfo* right){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;
    if(isArithmetic(left) && isArithmetic(right)) return maxByRank(left, right);
    printError("Ambos operandos de un producto o division (*, /) deben ser de tipo aritmetico.");
    return typeError;
}

typeInfo* reduceRemainder(typeInfo* left, typeInfo* right){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;
    if(isInteger(left) && isInteger(right)) return typeInt;
    
    printError("Ambos operandos del operador modulo (\%) deben ser de tipo entero.");
    return typeError;
}

typeInfo* reduceRelational(typeInfo* left, typeInfo* right){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;
    if(isReal(left) && isReal(right)) return typeInt;
    if(left->type == t_PTR && right->type == t_PTR) return typeInt;
    printError("Los operandos de una inecuacion (<, >, <=, >=) deben ser tanto ambos de tipo real o ambos de tipo puntero.");
    return typeError;
}

typeInfo* reduceLogical(typeInfo* left, typeInfo* right){
    if(checkTypeError(left) || checkTypeError(right)) return typeError;
    if(isScalar(right) && isScalar(left)) return typeInt;
    typeError("En operaciones logicas ambos operadores deben ser de tipo escalar");
    return typeError;
}

typeInfo* reduceConditional(typeInfo* first, typeInfo* second, typeInfo* third){
    if(checkTypeError(first) || checkTypeError(second) || checkTypeError(third)) return typeError;
    if(! isScalar(first)){
        printError("En el operador ternario, el primer operando ee ser de tipo escalar");
        return typeError;
    }
    if(isArithmetic(second) && isArithmetic(third)) return maxByRank(second, third);
    if(second->type == t_VOID && third->type == t_VOID) return typeVoid;
    if(second->type == t_PTR && third->type == t_PTR) return ;


}
