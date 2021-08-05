#ifndef WRITERS_H_
#define WRITERS_H_

    #include "freqtable.h"
    #include "lexemelist.h"
    #include <stdio.h>

    void freqtable_write_to(t_freqtable* self, FILE* file, char* title, void(*write_as)(void*, FILE*));
    void lexeme_list_write_to(t_lexeme_list* self, FILE* file, char* title, void(*write_as)(void*, FILE*));
    void lexeme_list_write_sum(t_lexeme_list* self, FILE* file);

    void as_is(void* element, FILE* file);
    void as_string_literal(void* element, FILE* file);
    void as_oct_hex(void* element, FILE* file);
    void as_real(void* element, FILE* file);
    void as_freqtable_entry(void* element, FILE* file);
    void as_errortable_entry(void* element, FILE* file);

#endif // !W_H_