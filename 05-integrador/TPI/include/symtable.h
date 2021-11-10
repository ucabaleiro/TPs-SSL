#ifndef SYMTABLE_H_
#define SYMTABLE_H_

#include "list.h"
#include "stringso.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>

void printError(char* format, ...);

typedef enum typeName { t_VOID, t_CHAR, t_INT, t_FLOAT, t_DOUBLE, t_PTR, t_ARRAY, t_FUNC, t_ERROR } typeName;

typedef struct typeInfo {
    typeName type;
    struct typeInfo* next;
    // v Usado solo para funciones v
    t_list* params;
    bool isDefined;
} typeInfo;

typeInfo* typeInt;
typeInfo* typeChar;
typeInfo* typeVoid;
typeInfo* typeFloat;
typeInfo* typeDouble;
typeInfo* typeString;
typeInfo* typeError;

void initBaseTypes();

typedef struct symbol {
    char* identifier;
    typeInfo* type;
} symbol;

typedef struct symtable {
    t_list* elems;
} symtable;

typeInfo* typeInfo_create(typeName type);

void typeInfo_destroy();

void typeInfo_append(typeInfo **self, typeInfo *next);

bool typeInfo_match(typeInfo *left, typeInfo *right);

symbol *symbol_create();

void symbol_destroy(symbol *self);

symtable* symtable_create();

void symtable_destroy(symtable* self);

symbol* symtable_lookup(symtable* self, char* identifier);

bool symtable_isPresent(symtable *self, char *identifier);

void symtable_addSymbol(symtable *self, symbol *elem);

void symtable_addSymbols(symtable *self, t_list *elems);

void symtable_print(symtable *self);

void symbol_print(symbol *self);

void typeInfo_print(typeInfo *self);

#endif