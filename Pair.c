#include <stdio.h>
#include <stdlib.h>

#include "Pair.h"

void InitPair(Pair *pair, String *str, int priority)
{
    pair->str = str;
    pair->priority = priority;
}
Pair* MakePair(String *str, int priority)
{
    Pair *pair = malloc(sizeof(Pair));
    pair->str = str;
    pair->priority = priority;
    return pair;
}

void PrintPair(const Pair *pair)
{
    PrintString(pair->str);
    printf("%d\n", pair->priority);
}
