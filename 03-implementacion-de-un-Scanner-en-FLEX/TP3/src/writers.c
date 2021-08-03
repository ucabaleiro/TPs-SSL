#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "writers.h"
#include "list.h"
#include "stringso.h"
#include "txt.h"

void free_nullterminated_pointer_array(char** data);

void list_write_to(t_list* self, FILE* file, char* title, void(*write_as)(void*, FILE*)){
    void _write_as(void* element){
        write_as(element, file);
    }
    char* line = string_repeat('-', 20);
    char* printed_header = string_from_format("%s\n%s\n", title, line);
    txt_write_in_file(file, printed_header);
    free(printed_header);
    free(line);
    list_iterate(self, _write_as);
    txt_write_in_file(file, "\n");
}

void lexeme_list_write_to(t_lexeme_list* self, FILE* file, char* title, void(*write_as)(void*, FILE*)){
    list_write_to(self->elements, file, title, write_as);
}

void freqtable_write_to(t_freqtable* self, FILE* file, char* title, void(*write_as)(void*, FILE*)){
    list_write_to(self->elements, file, title, write_as);
}

/*  
Estas funciones de formatter podrian ser delegadas entre si ya que repiten logica
pero se hace una ensalada de tipados, ademas lidiando con variargs, mejor asi y chau
*/
void as_is(void* element, FILE* file){
    char* r_element = (char*) element;
    char* printed_entry = string_from_format("lexema: %s\n", r_element);
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
}

void as_string_literal(void* element, FILE* file){
    char* r_element = (char*) element;
    char* printed_entry = string_from_format("lexema: %s, longitud: %i\n", r_element, string_length(r_element));
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
}

void as_oct_hex(void* element, FILE* file){
    char* r_element = (char*) element;
    char* printed_entry = string_from_format("lexema: %s, valor decimal: %lld\n", r_element, atol(r_element));
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
}

void as_real(void* element, FILE* file){
    char* r_element = (char*) element;
    double mantissa, integer, real = atof(r_element);
    mantissa = modf(real, &integer);
    char* printed_entry = string_from_format("lexema: %s, parte entera: %g, mantisa: %g\n", r_element, integer, mantissa);
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
     
}

void as_freqtable_entry(void* element, FILE* file){
    t_freqtable_entry* r_element = (t_freqtable_entry*) element;
    char* printed_entry = string_from_format("lexema: %s, veces que aparece: %i\n", r_element->lexeme, r_element->frequency);
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
}

//Aprovechamos las tablas de frecuencia para mostrar los pares palabra-linea
void as_errortable_entry(void* element, FILE* file){
    t_freqtable_entry* r_element = (t_freqtable_entry*) element;
    char* printed_entry = string_from_format("lexema: %s, linea donde se encuentra: %i\n", r_element->lexeme, r_element->frequency);
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
}

void lexeme_list_write_sum(t_lexeme_list* self, FILE* file){
    char* printed_entry = string_from_format("sumatoria total: %lld\n", lexeme_list_sum_as_int(self));
    txt_write_in_file(file, printed_entry);
    free(printed_entry);
}