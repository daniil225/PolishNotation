#ifndef _PAIR_H_
#define _PAIR_H_

#include "String.h"

typedef struct Pair
{
    String *str;
    int priority;
}Pair;


void InitPair(Pair *pair, String *str, int priority);
Pair* MakePair(String *str, int priority);

void PrintPair(const Pair *pair);


#endif