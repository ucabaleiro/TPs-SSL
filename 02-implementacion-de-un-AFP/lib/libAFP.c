#include <stdlib.h>
#include "libTP2.h"

// Tabla de Movimientos
const movimiento TablaDeMovimientos [MAX_S][MAX_Q][MAX_T] =
{
    {
        { RECHAZO       , {Q1, &nada}   , RECHAZO       , {Q0, &pushR}  , RECHAZO   , RECHAZO }, 
        { {Q1, &nada}   , {Q1, &nada}   , {Q0, &nada}   , RECHAZO       , RECHAZO   , RECHAZO },
        { RECHAZO       , RECHAZO       , {Q0, &nada}   , RECHAZO       , RECHAZO   , RECHAZO },
        { RECHAZO       , RECHAZO       , RECHAZO       , RECHAZO       , RECHAZO   , RECHAZO }
    },

    {
        { RECHAZO       , {Q1, &nada}   , RECHAZO       , {Q0, &pushR}  , RECHAZO           , RECHAZO },
        { {Q1, &nada}   , {Q1, &nada}   , {Q0, &nada}   , RECHAZO       , {Q2, &descartar}  , RECHAZO },
        { RECHAZO       , RECHAZO       , {Q0, &nada}   , RECHAZO       , {Q2, &descartar}  , RECHAZO },
        { RECHAZO       , RECHAZO       , RECHAZO       , RECHAZO       , RECHAZO           , RECHAZO }
    }
};

// Tabla que indica cuales estados son de aceptacion
const retorno retornos [MAX_S][MAX_Q] =
{
    { INCORRECTO, CORRECTO  , CORRECTO  , INCORRECTO },
    { INCORRECTO, INCORRECTO, INCORRECTO, INCORRECTO }
};

// Recibe un caracter y devuelve el evento al que corresponde
evento conseguirNuevoEvento (char nuevoCaracter) 
{
    if (nuevoCaracter == '0') return T0;
    else if ((nuevoCaracter >= '1') && (nuevoCaracter <= '9')) return T1;
    else if ((nuevoCaracter == '+') || (nuevoCaracter == '*') || (nuevoCaracter == '-') || (nuevoCaracter == '/')) return T2;
    else if (nuevoCaracter == '(') return T3;
    else if (nuevoCaracter == ')') return T4;
    else return T5;
}

// Funcion para ignorar todos los espacios a excepcion de aquellos que estan entre expresiones
// Ejemplo: 5 + 4 es aceptado, 76 + (42*5) es aceptado, 8 6 NO es aceptado ya que carece de sentido, 8 (4+5) Tampoco es aceptado
unsigned int filtrarEspaciosEntreNumeros (char expresion[], unsigned int indice)
{
    if (indice > 0) 
        if (expresion[indice] == ' ')
            if (!(conseguirNuevoEvento(expresion[indice+1]) <= T1 && conseguirNuevoEvento(expresion[indice-1]) <= T1))
                return 0;
    return 1;
}

unsigned int sintacticamenteCorrecta ( char expresion[] )
{
    nodo* pila = NULL; //Inicializacion de la pila
    movimiento nuevoMovimiento = { Q0, &nada }; //Una variable que contiene el estado actual del automata y la accion a realizar sobre la pila

    unsigned int i = 0; // Indice para recorrer el buffer donde se encuentra la expresion
    while ( expresion[i] != '\n') 
    {
        if (filtrarEspaciosEntreNumeros(expresion, i))
        {   // Se obtiene un nuevo movimiento de la tabla a partir del estado actual del automata, de la pila y del ultimo caracter leido
            nuevoMovimiento = TablaDeMovimientos [leerPila (pila)][nuevoMovimiento.estado][conseguirNuevoEvento(expresion[i])];
            nuevoMovimiento.accionPila (&pila); //Actua sobre la pila segun el nuevo movimiento conseguido de la tabla
            if (nuevoMovimiento.estado == Q3) break; //Corta prematuramente la lectura si se llega al estado sumidero
        }

        i++;
    }

    i = retornos[leerPila(pila)][nuevoMovimiento.estado] ? 0 : i+1;
    while (pila != NULL) pop (&pila); //Libera toda la pila, para reiniciar el AFP
    return i;
}

