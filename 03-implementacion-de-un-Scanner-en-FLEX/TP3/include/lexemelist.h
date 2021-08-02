#ifndef LEXEMELIST_H_
#define LEXEMELIST_H_

    #include "list.h"
    #include <stdint.h>
    
    typedef struct lexeme_list {
        t_list* elements;
    } t_lexeme_list;

    t_lexeme_list* lexeme_list_create();
    void lexeme_list_destroy_and_destroy_elements(t_lexeme_list *self);
    void lexeme_list_add(t_lexeme_list* self, char* lexeme);
    void lexeme_list_add_length(t_lexeme_list* self, char* lexeme);
    int32_t lexeme_list_sum_as_int(t_lexeme_list* self);

#endif // !LL_H_
