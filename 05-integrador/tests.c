int sumar(int a, int b, int *c);
int funcion();
float retornar_float();
int retorna_aritmetico();
void nada();

int main()
{
    //----- Declaraciones -----//
    double **(*punteros_funcion[10])(int *(*)(double, float), char[][]);
    int *(*puntero_funcion)(double, float);
    int *(*error_puntero_funcion)(int *, char);
    char char_array[10][10];

    //----- Asignaciones -----//
    char* string = "test";
    string = nada(); //Error semantico, operando es void

    int int_u = 16;
    void *puntero_void = &int_u;
    string = puntero_void; //Correcto, no hay log

    double *puntero_double;
    puntero_double = puntero_funcion; // Error semantico, operandos son punteros no compatibles
    
    double *puntero_double_b = &int_u;
    puntero_double = puntero_double_b; //Correcto, no hay log

    //----- Arrays ------//
    int falsoArray;
    falsoArray[10]; //Error semantico, debe ser tipo array

    int array[10];
    array['1']; // Correcto, no hay log, los char son de categoria entero
    array["A"]; //Error semantico, indice debe ser entero
    array[2];   // Correcto, no hay log

    //----- Funciones ----//
    int int_a, int_b, *resultado, int_c;
    char char_a;
    float *punteroAFloat;

    funcion(int_b); //Error semantico, cantidad mayor de parametros
    funcion();      // Correcto, no hay log

    sumar(int_a, int_b);                     //Error semantico, cantidad menor de parametros
    sumar(char_a, punteroAFloat, resultado); //Error semantico, parametro 1 y 2 deben ser enteros
    sumar(int_a, int_b, resultado);          // Correcto, no hay log

    punteros_funcion(puntero_funcion, char_array);         //Error semantico, expresion no es funcion
    punteros_funcion[1](error_puntero_funcion, char_array); //Error semantico, parametro 1 es puntero a funcion incorrecto
    punteros_funcion[1](puntero_funcion, char_array);      // Correcto, no hay log

    //----- Operadores unarios ----//
    int int_i = 0;
    int_i++;   // Correcto, no hay log
    funcion--; //Error semantico, operando no es escalar

    float float_y = 10.0;
    char char_x = ~float_y; //Error semantico, operando no es entero

    int int_array[10];
    int_array[10] = !int_array; //Error semantico, operando no es escalar

    int_array[1] = sizeof nada;       //Error semantico, operando no debe ser una funcion
    
    float float_a = (float)int_array; //Error semantico, operando no es escalar
    int int_y = (int[10])57.8;        //Error semantico, el tipo de casteo no es escalar/void
    double double_a = (double)float_y; //Correcto, no hay log

    //----- Operaciones aritmeticas ----//
    int int_z = funcion - 10 + funcion(); //Error semantico, operando no es aritmetico
    int_z = 10 + 20 - 10;                 // Correcto, no hay log

    int_z = int_array % 10; //Error semantico, operandos deben ser enteros
    int_z = int_z % 4;      // Correcto, no hay log

    int int_v = 10 / nada; //Error semantico, operandos deben ser aritmeticos
    int_v = 10 / retorna_aritmetico(); //Correcto, no hay log

    int int_w = int_z > float_a; // Correcto, no hay log
    int_w = int_array < int_w;   //Error semantico, ambos operandos no son reales

    int_w = float_y != funcion; //Error semantico, operando no es comparable
    int_w = int_w | funcion ^ float_a; //Error semantico, ambos operandos deben ser enteros

    int_w = int_w && int_z || int_v; // Correcto, no hay log
    int_w = int_w && int_array;      // Error semantico, ambos operandos deben ser escalares

    //----- Extras ----//
    int @error = 38; //Error lexico

    return 0;
}

int sumar(int a, int b, int *c)
{
    *c = a + b;
    return 1;
}

void nada()
{
    return 1;
}

float retornar_float()
{
    char char_z[] = "A";
    return char_z;
}

int error_restar(int, int resto) //Error semantico, todos los parametros deben estar identificados en la definicion
{
    return valor - resto; //Error semantico, valor no fue declarado
}

int retorna_aritmetico() {
    return 2;
}