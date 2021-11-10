#include "symtable.h"

typeInfo* reduceArray(typeInfo* left, typeInfo* right);
typeInfo* reduceFunction(typeInfo* func, t_list* argTypes);
typeInfo* reduceIncrement(typeInfo* exp);