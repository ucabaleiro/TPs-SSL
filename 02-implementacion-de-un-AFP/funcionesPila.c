#include <stdlib.h>
#include <stdio.h>


/*  NOTAS:

        En el main, el tipo de la variable que maneja la pila deberia ser       nodo *pila          (puntero a nodo) pero las llamadas a push, pop e inicializarPila
        deberian ser de la forma:
            push(&pila, caracter)
            pop(&pila)
            inicializarPila(&pila)
        
            Notar el uso del ampersand &.
        
        Inicializar pila con valor NULL (nodo *pila = NULL)


        TO-DO: Ver que deberia retornar un pop sobre la pila vacia. Actualmente retorna NULL pero no se que tan correcto sea.

*/

typedef struct nodo{
    char caracter;
    struct nodo* sgte;
} nodo;



void push(nodo** pila, char caracter){

    nodo *nodoAux = malloc(sizeof(nodo));

    nodoAux -> caracter = caracter;
    nodoAux -> sgte = *pila;

    *pila = nodoAux;

}


//To-do: ver que deberia retornar pop sobre la pila vacia. (Actual: NULL)

char pop(nodo** pila){

    if (*pila != NULL){
        
        nodo* nodoAux = *pila;

        char retorno = nodoAux -> caracter;

        *pila = nodoAux -> sgte;

        free(nodoAux);

        return retorno;
    }

    else{
        return NULL;
    }
    
}




void inicializarPila(nodo **pila){
    
    while (*pila != NULL){
        pop(pila);
    }
    
    push(pila, '$');
}




int main(void){

    return 0;
}

