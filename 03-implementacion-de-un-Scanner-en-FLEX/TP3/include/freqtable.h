#ifndef FREQTABLE_H_
#define FREQTABLE_H_

    #include "list.h"
    #include <stdint.h>
    
    typedef struct freqtable {
        t_list* elements;
    } t_freqtable;

    typedef struct freqtable_entry {
        char* lexeme;
        uint32_t frequency;
    } t_freqtable_entry;

    t_freqtable* freqtable_create();
    void freqtable_destroy_and_destroy_elements(t_freqtable *self);
    void freqtable_add(t_freqtable* self, char* lexeme);
    void freqtable_add_alpha(t_freqtable* self, char* lexeme);
    void freqtable_add_as_error(t_freqtable* self, char* lexeme, uint32_t line);

#endif // !FT_H_
