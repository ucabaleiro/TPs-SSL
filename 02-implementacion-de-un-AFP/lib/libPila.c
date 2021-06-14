#include "libTP2.h"

// Agrega un simbolo de pila a la Pila
void push (nodo** head, simboloPila newVal) 
{
	nodo* tmp   = malloc(sizeof (nodo));
	tmp -> val  = newVal;
	tmp -> next = *head;
	*head = tmp;
	return;
}

// Remueve y retorna un simbolo de pila de la pila
simboloPila pop (nodo** head) 
{
    simboloPila popVal;
    nodo* tmp = *head;
    popVal    = tmp -> val;
    *head     = tmp -> next;
    free (tmp);
    return popVal;
}

// Lee y retorna el tope al simbolo de la pila
// Si esta vacia, retorna el simbolo de pila vacia
simboloPila leerPila (nodo* head) 
{
    if (head == NULL) return $;
    else return head->val;
}

// Hace un Push del simbolo R
void pushR (nodo** head) 
{
    push(head, R);
    return;
}

// Hace un pop sin retornar nada
void descartar (nodo** head) 
{
    pop(head);
    return;
}

// Deja la pila intacta
void nada (nodo** head) 
{
    return;
}