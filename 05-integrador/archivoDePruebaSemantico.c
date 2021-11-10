
int sumar(int a, int b);

int main(){
    double **(*unosPunterosAFuncionAsquerosos[10])(int*(*)(double, float), char[*][*]);
    //----- TEST ARRAYS ------//
    int unArrayConfundido;
    unArrayConfundido[10]; //Error semantico debe ser tipo array

    int unArray[10];
    unArray["HOLA :|"]; //Error semantico indice debe ser entero


    return 0;
}

int sumar(int a, int b, int *c){
    *c = a+b;
    return 1;
}