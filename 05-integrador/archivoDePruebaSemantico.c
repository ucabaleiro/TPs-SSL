
int sumar(int a, int b, int *c);

int main(){
    //----- TEST DECLARACION COMPLEJA -----//
    double **(*unosPunterosAFuncionAsquerosos[10])(int*(*)(double, float), char[*][*]);

    //----- TEST ARRAYS ------//
    int unArrayConfundido;
    unArrayConfundido[10]; //Error semantico, debe ser tipo array

    int unArray[10];
    unArray["HOLA :|"]; //Error semantico, indice debe ser entero

    //----- TEST LLAMADO A FUNCION ----//
    int unaVar, otraVar, *resultado, unaVariableMetiche;
    char unCharEquivocado; float* unPunteroAFloatEquivocado;

    sumar(unaVar, otraVar); //Error semantico, cantidad errada de parametros por abajo
    sumar(unaVar, otraVar, resultado, unaVariableMetiche); //Error semantico, cantidad errada de parametros por arriba
    sumar(unCharEquivocado, unPunteroAFloatEquivocado, resultado); //Error semantico, parametro 1 y 2 deben ser enteros
    sumar(unaVar, otraVar, resultado); // Este es correcto



    return 0;
}

int sumar(int a, int b, int *c){
    *c = a+b;
    return 1;
}