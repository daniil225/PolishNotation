#ifndef _DICTIONARY_H_
#define _DICTIONARY_H_
#define MAX_SIZE_ARRAY 10

#include "Pair.h"
#include "String.h"

typedef struct Dictonary
{
    Pair *elem;
    int size;
    int MaxSize;
}Dictonary;


void InitDictionary(Dictonary *Dict);

void InputDictionary(Dictonary *Dict, Pair *pair);


// ret: int
// -1: key apcent in Dickt
// priority of key is num >= 0
int GetElementByKey(const Dictonary *Dict, String *key);


// ret: int
// 1 => element[key] present in dict
// 0 => element[key] apsent in dict
int InDictionary(const Dictonary *Dict, String *key);

void DeleteDictionary(Dictonary *Dict);


int GetSizeDictionary(const Dictonary *Dict);

void ShowDict(const Dictonary *Dict);


#endif