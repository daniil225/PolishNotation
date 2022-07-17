#ifdef T
#include "template.h"

#define SIZE 10

// Шаблонное определение стека 


typedef struct TEMPLATE(Stack, T)
{
    T *element;
    int size;
    int MAX_SIZE;
}TEMPLATE(Stack, T);

void TEMPLATE(InitStack, T)(TEMPLATE(Stack, T) *stack);

void TEMPLATE(push, T)(TEMPLATE(Stack, T) *stack, T *elem);

T TEMPLATE(pop, T)(TEMPLATE(Stack, T)* stack);

T TEMPLATE(peak, T)(TEMPLATE(Stack, T)* stack);

void TEMPLATE(Delete, T)(TEMPLATE(Stack, T)* stack);


#endif