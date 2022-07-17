#ifdef T
#include<stdlib.h>

#include "Stack_as_template.h"
#include "template.h"

void TEMPLATE(InitStack, T)(TEMPLATE(Stack, T) *stack)
{
    stack->element = malloc(SIZE*sizeof(T));
    stack->size = 0;
    stack->MAX_SIZE = SIZE;
}


void TEMPLATE(push, T)(TEMPLATE(Stack, T) *stack, T *elem)
{
    if(stack->size < stack->MAX_SIZE)
    {
        stack->element[stack->size] = *elem;
        stack->size++;
    }
    else
    {
        stack->MAX_SIZE += SIZE;
        stack->element = realloc(stack->element, stack->MAX_SIZE*sizeof(T));
        stack->element[stack->size] = *elem;
        stack->size++;
    }

}


T TEMPLATE(pop, T)(TEMPLATE(Stack, T)* stack)
{
    T res;
    stack->size--;
    res = stack->element[stack->size];

    return res;
}


T TEMPLATE(peak, T)(TEMPLATE(Stack, T)* stack)
{
    T res;
    res = stack->element[stack->size];
    return res;
}

#endif