#ifndef SYMTABLE_H_
#define SYMTABLE_H_

#include "list.h"
#include "stringso.h"
#include <stdbool.h>

typedef struct typeInfo {
    enum { VOID, CHAR, INT, FLOAT, DOUBLE, PTR, ARRAY } name;
    typeInfo* next;
} typeInfo;

typedef struct symbol {
    char* identifier;
    enum { VAR, FUNC } kind; 
    typeInfo* type;
    // v Usado solo para funciones v
    t_list* params;
    bool isDefined;
} symbol;

typedef struct symtable {
    t_list* elems;
} symtable;

symbol *symbol_create(char *identifier);

void symbol_destroy(symbol *self);

symtable* symtable_create();

void symtable_destroy(symtable* self);

symbol* symtable_lookup(symtable* self, char* identifier);

void symtable_add(symtable* self, symbol* elem);

#endif SYMTABLE_H_