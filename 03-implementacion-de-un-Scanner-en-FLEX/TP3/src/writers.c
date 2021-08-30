#include "writers.h"

#include <inttypes.h>
#include <stdlib.h>
#include <math.h>

#include "list.h"
#include "stringso.h"

void lexeme_list_write(t_lexeme_list* self, FILE* file, char* title, void(*write_as)(t_record*, FILE*)){
    void _write_as(void* element){
        write_as((t_record*)element, file);
    };
    char* line = string_repeat('-', string_length(title));
    fprintf(file, "%s\n%s\n", title, line);
    free(line);
    list_iterate(self->elements, _write_as);
    fprintf(file, "\n");
}

void lexeme_list_write_sum(t_lexeme_list* self, FILE* file){
    fprintf(file, "sumatoria total: %" PRId64 "\n\n", lexeme_list_sum_as_int(self));
}

void as_is(t_record* element, FILE* file){
    fprintf(file, "lexema: %s\n", element->lexeme);
}

void as_string_literal(t_record* element, FILE* file){
    fprintf(file, "lexema: %s, longitud: %i\n", element->lexeme, string_length(element->lexeme)-2);
}

void as_keyword(t_record* element, FILE* file){
    fprintf(file, "lexema: %s, tipo: %s\n", element->lexeme, (char*)element->value);
}

void as_oct(t_record* element, FILE* file){
    char* tmp;
    fprintf(file, "lexema: %s, valor decimal: %ld\n", element->lexeme, strtol(element->lexeme, &tmp, 8));
}

void as_hex(t_record* element, FILE* file){
    char* tmp;
    fprintf(file, "lexema: %s, valor decimal: %ld\n", element->lexeme, strtol(element->lexeme, &tmp, 16));
}

void as_real(t_record* element, FILE* file){
    double mantissa, integer, real = atof(element->lexeme);
    mantissa = modf(real, &integer);
    fprintf(file, "lexema: %s, parte entera: %g, mantisa: %g\n", element->lexeme, integer, mantissa); 
}

void as_frequency_count(t_record* element, FILE* file){
    fprintf(file, "lexema: %s, veces que aparece: %" PRIu32 "\n", element->lexeme, *(uint32_t*)element->value);
}

void as_comment(t_record* element, FILE* file){
    fprintf(file, "%s:\n%s\n\n", (char*)element->value, element->lexeme);
}

void as_unrecognized(t_record* element, FILE* file){
    fprintf(file, "cadena no reconocida: %s, linea donde se encuentra: %" PRIu32 "\n", element->lexeme, *(uint32_t*)element->value);
}