#ifndef _TP2LIB_H_
#define _TP2LIB_H_

#ifndef RECHAZO
#define RECHAZO { Q3, &nada } // El movimiento que lleva al estado sumidero
#endif

#ifndef NULL
#define NULL 0
#endif

// Enums para usar palabras legibles como indice de las tablas
typedef enum simboloPila    { $, R, MAX_S } simboloPila; // Los diferentes simbolos de pila
typedef enum estado         { Q0, Q1, Q2, Q3, MAX_Q } estado; // Los diferentes estados
typedef enum evento         { T0, T1, T2, T3, T4, T5, MAX_T } evento; // Los diferentes eventos
typedef enum retorno        { INCORRECTO, CORRECTO, MAX_RET } retorno; // Los diferentes tipos de retorno


// Definicion de los nodos para la pila
typedef struct nodo
{
    simboloPila val;
    struct nodo* next;
} nodo;

// Definicion de un movimiento para la tabla de movimientos
// Consiste de un enum que representa el estado a dirigirse
// Y de un puntero a funcion para las acciones a realizar sobre la pila
typedef struct movimiento
{
    estado estado;
    void (*accionPila) (nodo**);
} movimiento;

//Funciones
extern void        push        (nodo**, simboloPila);
extern simboloPila pop         (nodo**);
extern simboloPila leerPila    (nodo*);

extern void        pushR       (nodo**);
extern void        descartar   (nodo**);
extern void        nada        (nodo**);

extern evento conseguirNuevoEvento (char);
extern unsigned int sintacticamenteCorrecta (char[]);

// Tabla de Movimientos
extern const movimiento TablaDeMovimientos [MAX_S][MAX_Q][MAX_T];

// Tabla que indica cuales estados son de aceptacion
extern const retorno retornos [MAX_S][MAX_Q];

#endif // !_TP2LIB_H_