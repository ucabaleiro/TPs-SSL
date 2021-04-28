//  TODO
/*  Cambiar el automata implementado, el actual funciona pero hace uso de cierta
    logica auxiliar para contemplar los caracteres centinelas y el fin de linea.
    Se deben implementar mas estados que consideren estos casos.

    Revisar como referencia la resolucion de SSL VOL. 2, Capitulo 1.6, Ejercicio 17 */

#include <stdio.h>
#include <string.h>

/*  Uso de enums para estados y eventos en lugar de ints para mejor comprension 
    Entendemos por eventos al conjunto de simbolos que generan las mismas transiciones  */
enum estados { Q0, Q1, Q2, Q3, Q4, Q5, Q6, MAX_Q };
enum eventos { T0, T1, T2, T3, T4, T5, MAX_T };

/*  Tipos de retorno para la finalizacion del automata en cada estado */
enum ret { NO_RECONOCIDA, DECIMAL, OCTAL, HEXADECIMAL, MAX_RET };
const char* retornos [] = {"NO RECONOCIDA", "DECIMAL", "OCTAL", "HEXADECIMAL"};
const enum ret mapaRetornos [MAX_Q] = {NO_RECONOCIDA, DECIMAL, OCTAL, NO_RECONOCIDA, OCTAL, HEXADECIMAL, NO_RECONOCIDA};

/*  Tabla de Transiciones para todos los posibles estados del automata
    Toma un estado y un evento, y transiciona al siguiente estado correspondiente */
const enum estados tablaDeEstado [MAX_Q][MAX_T] = 
{ /* T0, T1, T2, T3, T4, T5 */
    {Q2, Q6, Q1, Q1, Q6, Q6},   /* Q0 */
    {Q1, Q6, Q1, Q1, Q6, Q6},   /* Q1 */
    {Q4, Q3, Q4, Q6, Q6, Q6},   /* Q2 */
    {Q5, Q6, Q5, Q5, Q5, Q6},   /* Q3 */
    {Q4, Q6, Q4, Q6, Q6, Q6},   /* Q4 */
    {Q5, Q6, Q5, Q5, Q5, Q6},   /* Q5 */
    {Q6, Q6, Q6, Q6, Q6, Q6}    /* Q6 */
};

/*  Funcion para mapear los diferentes caracteres esperados a los eventos contemplados en el automata */
enum eventos conseguirNuevoEvento (char nuevoCaracter)
{
    if (nuevoCaracter == '0') return T0;
    else if ((nuevoCaracter == 'x') || (nuevoCaracter == 'X')) return T1;
    else if ((nuevoCaracter >= '1') && (nuevoCaracter <= '7')) return T2;
    else if ((nuevoCaracter >= '8') && (nuevoCaracter <= '9')) return T3;
    else if (((nuevoCaracter >= 'A') && (nuevoCaracter <= 'F')) || ((nuevoCaracter >= 'a') && (nuevoCaracter <= 'f'))) return T4;
    else return T5;
}

int main (void)
{
    enum estados estadoActual = Q0;
    enum eventos nuevoEvento;
    FILE *archivoEntrada = fopen ("entrada.txt", "r");
    FILE *archivoSalida = fopen ("salida.txt", "w");
    char buffer[20] = {0};
    int i = 0;
    char simbolo = fgetc (archivoEntrada);
    while (!feof (archivoEntrada))
    {
        if (simbolo == ',')
        {
            fprintf(archivoSalida, "%-20s%s\n", buffer, retornos[mapaRetornos[estadoActual]]);
            estadoActual = Q0;
            memset(buffer, 0, 20);
            i = 0;
        }
        else
        {
            buffer[i] = simbolo;
            i++;
            nuevoEvento = conseguirNuevoEvento (simbolo);
            estadoActual = tablaDeEstado [estadoActual][nuevoEvento];
        }
        simbolo = fgetc (archivoEntrada);
    }
    fprintf(archivoSalida, "%-20s%s\n", buffer, retornos[mapaRetornos[estadoActual]]);
    fclose(archivoEntrada);
    fclose(archivoSalida);
    return 0;
}