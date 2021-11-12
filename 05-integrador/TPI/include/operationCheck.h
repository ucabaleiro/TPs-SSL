#include "symtable.h"

typeInfo* reduceArray(typeInfo* left, typeInfo* right);
typeInfo* reduceFunction(typeInfo* func, t_list* argTypes);
typeInfo* reduceIncrement(typeInfo* exp);
typeInfo* reduceDereference(typeInfo* exp);
typeInfo* reduceUnaryPlus(typeInfo* exp);
typeInfo* reduceBitwiseNot(typeInfo* exp);
typeInfo* reduceLogicalNot(typeInfo* exp);
typeInfo* reduceSizeOf(typeInfo* exp);
typeInfo* reduceCast(typeInfo* type, typeInfo* exp);
typeInfo* reduceProduct(typeInfo* left, typeInfo* right);
typeInfo* reduceRemainder(typeInfo* left, typeInfo* right);
typeInfo* reduceSum(typeInfo* left, typeInfo* right);
typeInfo* reduceSubtract(typeInfo* left, typeInfo* right);
typeInfo* reduceRelational(typeInfo* left, typeInfo* right);
typeInfo* reduceEquality(typeInfo* left, typeInfo* right);
typeInfo* reduceBitwise(typeInfo* left, typeInfo* right);
typeInfo* reduceLogical(typeInfo* left, typeInfo* right);
typeInfo* reduceConditional(typeInfo* first, typeInfo* second, typeInfo* third);
typeInfo* reduceAssignment(typeInfo* left, typeInfo* right);