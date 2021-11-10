
int sumar(int a, int b, int *c);
int unaFuncionSinParametros();

int main(){
    //----- TEST DECLARACIONES -----//
    double **(*unosPunterosAFuncionAsquerosos[10])(int*(*)(double, float), char[][]);
    int*(*unPunteroAFuncionQueSirve)(double, float);
    int*(*unPunteroAFuncionQueNOSirve)(int*, char);
    char unCharArrayQueSirve[][];

    //----- TEST ARRAYS ------//
    int unArrayConfundido;
    unArrayConfundido[10]; //Error semantico, debe ser tipo array

    int unArray[10];
    unArray["HOLA :|"]; //Error semantico, indice debe ser entero

    //----- TEST LLAMADO A FUNCION ----//
    int unaVar, otraVar, *resultado, unaVariableMetiche;
    char unCharEquivocado; float* unPunteroAFloatEquivocado;

    unaFuncionSinParametros();

    sumar(unaVar, otraVar); //Error semantico, cantidad errada de parametros por abajo
    sumar(unaVar, otraVar, resultado, unaVariableMetiche); //Error semantico, cantidad errada de parametros por arriba
    sumar(unCharEquivocado, unPunteroAFloatEquivocado, resultado); //Error semantico, parametro 1 y 2 deben ser enteros
    sumar(unaVar, otraVar, resultado); // Este es correcto

    unosPunterosAFuncionAsquerosos(unPunteroAFuncionQueSirve, unCharArrayQueSirve); //Error semantico, expresion no es funcion
    unosPunterosAFuncionAsquerosos[1](unPunteroAFuncionQueNOSirve, unCharArrayQueSirve); //Error semantico, parametro 1 es puntero a funcion incorrecto
    unosPunterosAFuncionAsquerosos[1](unPunteroAFuncionQueSirve, unCharArrayQueSirve); // Este es correcto

    return 0;
}

int sumar(int a, int b, int *c){
    *c = a+b;
    return 1; 
}