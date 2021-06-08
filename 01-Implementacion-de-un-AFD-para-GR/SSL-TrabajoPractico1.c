#include <stdio.h>
#include <string.h>

/*  Uso de enums para estados y eventos en lugar de ints para mejor comprension 
    Entendemos por eventos al conjunto de simbolos que generan las mismas transiciones  */
enum estados { Q0, Q1, Q2, Q3, Q4, Q5, Q6, MAX_Q };
enum eventos { T0, T1, T2, T3, T4, T5, MAX_T };

/*  Tipos de retorno para la finalizacion del automata en cada estado */
enum ret { NO_RECONOCIDA, DECIMAL, OCTAL, HEXADECIMAL, MAX_RET };
const char* retornos[] = { "NO RECONOCIDA", "DECIMAL", "OCTAL", "HEXADECIMAL" };
const enum ret mapaRetornos[MAX_Q] = { NO_RECONOCIDA, DECIMAL, OCTAL, NO_RECONOCIDA, OCTAL, HEXADECIMAL, NO_RECONOCIDA };

/*  Tabla de Transiciones para todos los posibles estados del automata
    Toma un estado y un evento, y transiciona al siguiente estado correspondiente */
const enum estados tablaDeEstado [MAX_Q][MAX_T] = 
{ /* T0, T1, T2, T3, T4, T5 */
    {Q2, Q6, Q1, Q1, Q6, Q6},   /* Q0: Estado inicial, no se leyo ningun simbolo    */ 
    {Q1, Q6, Q1, Q1, Q6, Q6},   /* Q1: Estado de aceptacion DECIMAL                 */
    {Q4, Q3, Q4, Q6, Q6, Q6},   /* Q2: Se leyo un 0, Estado de aceptacion OCTAL     */
    {Q5, Q6, Q5, Q5, Q5, Q6},   /* Q3: Se leyo un 0X, Estado de rechazo             */
    {Q4, Q6, Q4, Q6, Q6, Q6},   /* Q4: Estado de aceptacion OCTAL                   */
    {Q5, Q6, Q5, Q5, Q5, Q6},   /* Q5: Estado de aceptacion HEXADECIMAL             */
    {Q6, Q6, Q6, Q6, Q6, Q6}    /* Q6: Estado de rechazo, pozo o sumidero           */
};

/*  Funcion para mapear los diferentes caracteres esperados a los eventos contemplados en el automata */
enum eventos conseguirNuevoEvento (char nuevoCaracter) {
    if (nuevoCaracter == '0') return T0;
    else if ((nuevoCaracter == 'x') || (nuevoCaracter == 'X')) return T1;
    else if ((nuevoCaracter >= '1') && (nuevoCaracter <= '7')) return T2;
    else if ((nuevoCaracter >= '8') && (nuevoCaracter <= '9')) return T3;
    else if (((nuevoCaracter >= 'A') && (nuevoCaracter <= 'F')) || ((nuevoCaracter >= 'a') && (nuevoCaracter <= 'f'))) return T4;
    else return T5;
}

int main (void) {
    enum estados estadoActual = Q0;
    enum eventos nuevoEvento;
    FILE *archivoEntrada = fopen ("entrada.txt", "r");
    FILE *archivoSalida = fopen ("salida.txt", "w");
    char buffer[21] = {0};  // Buffer para luego printear las palabras leidas
    int i = 0;              // Contador para el buffer
    char simbolo = fgetc (archivoEntrada);
    while (!feof (archivoEntrada)) {
        if (simbolo == ',') {       
            fprintf(archivoSalida, "%-20s%s\n", buffer, retornos[mapaRetornos[estadoActual]]);
            estadoActual = Q0;      // Reiniciar el automata
            memset(buffer, 0, 20);  // Limpiar el buffer
            i = 0;
        }
        else {
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