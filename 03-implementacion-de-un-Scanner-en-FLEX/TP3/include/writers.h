#ifndef WRITERS_H_
#define WRITERS_H_

    #include "lexemelist.h"
    #include <stdio.h>

    /* Imprime una lista de lexemas a un archivo de texto, dado un titulo y una funcion formato */
    void lexeme_list_write(t_lexeme_list* self, FILE* file, char* title, void(*write_as)(t_record*, FILE*));
    
    /* Imprime la sumatoria de una lista de lexemas interpretados como enteros */
    void lexeme_list_write_sum(t_lexeme_list* self, FILE* file);

/* Funciones formato, imprimen un elemento de una lista de lexemas
 * Los nombres corresponden a lo consignado para cada lexema en el TP */

    /* Imprime solamente el lexema */
    void as_is(t_record* element, FILE* file);

    /* Imprime el lexema junto con su longitud */
    void as_string_literal(t_record* element, FILE* file);

    /* Imprime el lexema junto con el tipo de keyword que es */
    void as_keyword(t_record* element, FILE* file);

    /* Imprime el lexema junto con su valor decimal */
    void as_oct_hex(t_record* element, FILE* file);

    /* Imprime el lexema junto con la parte entera y la mantisa de su valor real */
    void as_real(t_record* element, FILE* file);

    /* Imprime el lexema junto con la cantidad de veces que fue ingresado */
    void as_frequency_count(t_record* element, FILE* file);

    /* Imprime el lexema junto con el tipo de comentario que es*/
    void as_comment(t_record* element, FILE* file);

    /* Imprime una cadena no reconocida junto con la linea donde apareció */
    void as_unrecognized(t_record* element, FILE* file);

#endif // !W_H_