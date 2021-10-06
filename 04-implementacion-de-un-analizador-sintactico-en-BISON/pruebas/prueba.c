int sumar(int a, int b, int *c);

int main()
{
    int a = 5;
    char* b = &a;
    double c[10];
    if(a != 4){
        *b = 4;
    }
    else c[0] = 10;
    for(int i = 0; i < 15; i++){
        a--;
    }
    while(a < 0){
        a++;
    }

    int A = 5;
    int B = 10;
    int resultado;

    int ok = sumar(A, B, &resultado);

    return 0;
}

int sumar(int a, int b, int *c){
    *c = a+b;
    return 1;
}