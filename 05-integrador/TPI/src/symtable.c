#include "symtable.h"

symtable* symtable_create(){
    symtable* self = malloc(sizeof(symtable));
    self->elems = list_create();
    return self;
}

void symtable_destroy(symtable* self){
    void _symbol_destroy(void* elem){
        symbol_destroy((symbol*) elem);
    };
    list_destroy_and_destroy_elements(self->elems, _symbol_destroy);
    free(self);
}

symbol *symbol_create(char *identifier){
    symbol *self = malloc(sizeof(symbol));
    self->identifier = string_duplicate(identifier);
    self->params = list_create();
}

void symbol_destroy(symbol *self){
    free(self->identifier);
    list_destroy(self->params);
    free(self);
}

symbol* symtable_lookup(symtable* self, char* identifier){
    bool matchIdentifier(void* elem){
        return ((symbol*)elem)->identifier == identifier;
    };
    return list_find(self->elems, matchIdentifier);
}

void symtable_add(symtable* self, symbol* elem){
    list_add(self->elems, elem);
}