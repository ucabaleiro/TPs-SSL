const double *miPtr; //Para probar declaracion de variables simples
int sumar(int a, int b); //Para probar declaracion de funciones

int main()
{
    char *(*unaVariableMuyRebuscada[10])[10][10]; //Para probar declaracion de variables FEAS
    int a = 5;
    char* b = &a;
    double c[10];
    if(a != 4){     //Para probar sentencia de control
        *b = 4;
    }
    else c[0] = 10;
    for(int i = 0; i < 15; i++){ //Para probar sentencia de iteracion
        a--;
    }
    while(a < 0){   //Para probar sentencia de iteracion
        a++;
    }
    @ //Un error lexico de yapa
    long int *primera, *segunda[10], tercera, *cuarta[20]; //Para probar declaracion multiple
    
    int A = (5; // Aca hay un error
    int B = 10 goto; // Aca hay otro error
    int resultado valor; // Aca hay otro error 
    int ok = sumar(A, B, &resultado);
    
    switch(ok){   //Para probar sentencia de control y sentencias etiquetadas
        case 1: A = A+B;
        default: A = 0;
    }

    return A;
}

int sumar(int a, int b, int *c){ //Para probar definiciones de funciones
    *c = a+b;
    return 1;
}