#include "lexemelist.h"
#include <stdlib.h>
#include "stringso.h"

t_lexeme_list* lexeme_list_create(){
    t_lexeme_list* lexeme_list = malloc(sizeof(t_lexeme_list));
	t_list* elements = list_create();
	lexeme_list->elements = elements;
	return lexeme_list;
}

void lexeme_list_destroy_and_destroy_elements(t_lexeme_list *self){
    list_destroy_and_destroy_elements(self->elements, free);
	free(self);
}

void lexeme_list_add(t_lexeme_list* self, char* lexeme){
	list_add(self->elements, (void*)string_duplicate(lexeme));
}

void lexeme_list_add_length(t_lexeme_list* self, char* lexeme){
	bool _is_shorter(void* element, void* element2){
		char* r_element = (char*)element;
        char* r_element2 = (char*)element2;
        if(string_length(r_element) < string_length(r_element2)) return true;
        else return false;
	}
	list_add_sorted(self->elements, (void*)string_duplicate(lexeme), _is_shorter);
}

int32_t lexeme_list_sum_as_int(t_lexeme_list* self){
	void* _partial_sum(void* element, void* element2){
		int32_t* r_element = (int32_t*)element;
		char* r_element2 = (char*)element2;
		int32_t r_element2_value = (int32_t)atoi(r_element2);
		*r_element = *r_element + r_element2_value;
		return (void*)r_element; 
	}
	int32_t seed = 0;
	seed = *(int32_t*)list_fold(self->elements, (void*)&seed, _partial_sum);
	return seed;
}