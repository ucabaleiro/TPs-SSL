#include "lexemelist.h"
#include <stdlib.h>
#include <string.h>
#include "stringso.h"

t_record* record_create(char* lexeme, void* value){
	t_record* new_entry = malloc(sizeof(t_record));
    new_entry->lexeme = string_duplicate(lexeme);
	new_entry->value = value;
    return new_entry;
}

t_record* record_create_simple(char* lexeme){
    return record_create(lexeme, NULL);
}

t_record* record_create_with_int(char* lexeme, uint32_t value){
	uint32_t* value_ptr = malloc(sizeof(int));
	*value_ptr = value;
	return record_create(lexeme, (void*)value_ptr);
}

t_record* record_create_with_string(char* lexeme, char* string){
	char* new_string = string_duplicate(string);
	return record_create(lexeme, (void*)new_string);
}

t_lexeme_list* lexeme_list_create(){
    t_lexeme_list* lexeme_list = malloc(sizeof(t_lexeme_list));
	t_list* elements = list_create();
	lexeme_list->elements = elements;
	return lexeme_list;
}

void lexeme_list_destroy(t_lexeme_list *self){
	void _record_destroyer(void* entry){
    	t_record* r_entry = (t_record*)entry;
    	free(r_entry->lexeme);
		free(r_entry->value);
    	free(r_entry);
    }
    list_destroy_and_destroy_elements(self->elements, _record_destroyer);
	free(self);
}

void lexeme_list_add_simple(t_lexeme_list* self, char* lexeme){
	list_add(self->elements, (void*)record_create_simple(lexeme));
}

void lexeme_list_add_simple_length_sorted(t_lexeme_list* self, char* lexeme){
	bool _is_shorter(void* entry, void* entry2){
		t_record* r_entry = (t_record*)entry;
        t_record* r_entry2 = (t_record*)entry2;
        return (string_length(r_entry->lexeme) < string_length(r_entry2->lexeme));
	}
	list_add_sorted(self->elements, (void*)record_create_simple(lexeme), _is_shorter);
}

void lexeme_list_add_with_int(t_lexeme_list* self, char* lexeme, uint32_t value){
	list_add(self->elements, (void*)record_create_with_int(lexeme, value));
}

void lexeme_list_add_with_string(t_lexeme_list* self, char* lexeme, char* string){
	list_add(self->elements, (void*)record_create_with_string(lexeme, string));
}

void lexeme_list_add_as_frequency_count(t_lexeme_list* self, char* lexeme){
	bool _is_same_string(void* entry){
        t_record* r_entry = (t_record*)entry;
        return !strcmp(r_entry->lexeme, lexeme);
    }
	bool _is_smaller_alpha(void* entry, void* entry2){
        t_record* r_entry = (t_record*)entry;
        t_record* r_entry2 = (t_record*)entry2;
        return (strcmp(r_entry->lexeme, r_entry2->lexeme) < 1);
    }

    t_record* entry = (t_record*) list_find(self->elements, _is_same_string);

    if (entry != NULL)
        *(uint32_t*)entry->value += 1;
    else
        list_add_sorted(self->elements, (void*)record_create_with_int(lexeme, 1), _is_smaller_alpha);
}

int64_t lexeme_list_sum_as_int(t_lexeme_list* self){
	void* _partial_sum(void* entry, void* entry2){
		int64_t* r_entry = (int64_t*)entry;
		t_record* r_entry2 = (t_record*)entry2;
		int64_t r_entry2_value = (int64_t)atol(r_entry2->lexeme);
		*r_entry = *r_entry + r_entry2_value;
		return (void*)r_entry; 
	}
	int64_t seed = 0;
	seed = *(int64_t*)list_fold(self->elements, (void*)&seed, _partial_sum);
	return seed;
}