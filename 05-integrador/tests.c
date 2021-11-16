
int sumar(int a, int b, int *c);
int funcion();

int main(){
    //----- Declaraciones -----//
    double **(*punterosAFuncion[10])(int*(*)(double, float), char[][]);
    int*(*punteroAFuncion)(double, float);
    int*(*errorPunteroAFuncion)(int*, char);
    char charArray[][];

    //----- Arrays ------//
    int falsoArray;
    falsoArray[10]; //Error semantico, debe ser tipo array

    int array[10];
    array['1']; // Correcto, no hay log, los char son de categoria entero
    array["A"]; //Error semantico, indice debe ser entero
    array[2]; // Correcto, no hay log

    //----- Funciones ----//
    int int_a, int_b, *resultado, int_c;
    char char_a; float* punteroAFloat;

    
    funcion(int_b) //Error semantico, cantidad mayor de parametros
    funcion(); // Correcto, no hay log
    
    sumar(int_a, int_b); //Error semantico, cantidad menor de parametros 
    sumar(char_a, punteroAFloat, resultado); //Error semantico, parametro 1 y 2 deben ser enteros
    sumar(int_a, int_b, resultado); // Correcto, no hay log

    punterosAFuncion(punteroAFuncion, charArray); //Error semantico, expresion no es funcion
    punterosAFuncion[1](errorPunteroAFuncion, charArray); //Error semantico, parametro 1 es puntero a funcion incorrecto
    punterosAFuncion[1](punteroAFuncion, charArray); // Correcto, no hay log

    return 0;
}

int sumar(int a, int b, int *c){
    *c = a+b;
    return 1; 
}

int restar(int, int resto){
    return valor - resto;
}