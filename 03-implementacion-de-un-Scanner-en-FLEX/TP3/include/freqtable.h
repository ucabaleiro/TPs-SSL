#ifndef FREQTABLE_H_
#define FREQTABLE_H_

    #include "list.h"

    typedef struct freqtable {
        t_list* elements;
    } t_freqtable;

    t_freqtable* freqtable_create();
    void freqtable_destroy_and_destroy_elements(t_freqtable *self);
    void freqtable_add(t_freqtable* self, char* lexeme);
    void freqtable_add_alpha(t_freqtable* self, char* lexeme);
    
#endif // !FT_H_
