#ifndef LEXEMELIST_H_
#define LEXEMELIST_H_

    #include "list.h"
    #include <inttypes.h>
    
    typedef struct lexeme_list {
        t_list* elements;
    } t_lexeme_list;

    typedef struct record {
        char* lexeme;
        void* value;
    } t_record;

    /* Crea una lista de lexemas */
    t_lexeme_list* lexeme_list_create();

    /* Elimina una lista de lexemas y todos sus elementos */
    void lexeme_list_destroy(t_lexeme_list *self);

    /* Agrega un lexema a una lista, sin ninguna informacion complementaria */
    void lexeme_list_add_simple(t_lexeme_list* self, char* lexeme);

    /* Como add_simple, pero insertado de manera ordenada segun longitud */
    void lexeme_list_add_simple_length_sorted(t_lexeme_list* self, char* lexeme);

    /* Agrega un lexema a una lista, acompañado de un entero complementario */
    void lexeme_list_add_with_int(t_lexeme_list* self, char* lexeme, uint32_t value);

    /* Agrega un lexema a una lista, acompañado de una cadena complementaria */
    void lexeme_list_add_with_string(t_lexeme_list* self, char* lexeme, char* string);

    /* Agrega un lexema a una lista, de forma que un entero complementario-
     * lleve la cuenta de la cantidad de veces que el lexema fue ingresado */
    void lexeme_list_add_as_frequency_count(t_lexeme_list* self, char* lexeme);
    
    /* Retorna la sumatoria de todos los lexemas al ser interpretados como entero */
    int64_t lexeme_list_sum_as_int(t_lexeme_list* self);

#endif // !LL_H_