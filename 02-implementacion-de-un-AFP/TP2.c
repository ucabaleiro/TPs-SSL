#include <stdio.h>
#include <stdlib.h>
#include "Lib/libTP2.h"

int main () 
{
    size_t bytesCadena = 0;
    char *cadena = NULL;
    unsigned int puntoDeFalla = 0;

    while(1)
    {
        getline (&cadena, &bytesCadena, stdin); //Carga la linea ingresada por consola a un buffer
        if (cadena[0] == 'q') break; // Se usa el caracter 'q' para salir del programa

        // Punto de falla es 0 si la expresion es correcta, de ser incorrecta retorna la posicion donde se detecto un error
        puntoDeFalla = sintacticamenteCorrecta (cadena); 

        if (!puntoDeFalla) printf ("CORRECTO\n\n");
        else printf("%*c\n%*s\n\n", puntoDeFalla, '^', puntoDeFalla, "INCORRECTO"); //Se indica el punto de error con un ^
    }
    
    free(cadena); //Libera la memoria del buffer
    return 0;
}