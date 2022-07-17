#include <stdio.h>
#include <stdlib.h>

#include "../Libs/Dictionary.h"



void InitDictionary(Dictonary *Dict)
{
    Dict->elem = malloc(MAX_SIZE_ARRAY*sizeof(Pair));
    Dict->MaxSize = MAX_SIZE_ARRAY;
    Dict->size = 0;
}

void InputDictionary(Dictonary *Dict, Pair *pair)
{
    if(Dict->size < Dict->MaxSize)
    {
        Dict->elem[Dict->size].priority = pair->priority;
        Dict->elem[Dict->size].str = pair->str;
        Dict->size++;
    } 
    else
    { 
        Dict->MaxSize += MAX_SIZE_ARRAY;
        Dict->elem = realloc(Dict->elem, Dict->MaxSize*sizeof(Pair));
        Dict->elem[Dict->size].priority = pair->priority;
        Dict->elem[Dict->size].str = pair->str;
        Dict->size++;
    }
}



int GetElementByKey(const Dictonary *Dict, String *key)
{
    int res = -1;
    for(int i = 0; i < GetSizeDictionary(Dict); i++)
    {
        if(!CmpString(Dict->elem[i].str, key))
        {
            res = Dict->elem[i].priority;
            break;
        }
    }

    return res;
}


// ret: int
// 1 => element[key] present in dict
// 0 => element[key] apsent in dict
int InDictionary(const Dictonary *Dict, String *key)
{
    int res = 0;
    for(int i = 0; i < GetSizeDictionary(Dict); i++)
    {
        if(!CmpString(Dict->elem[i].str, key))
        {
            res = 1;
            break;
        }
    }
    return res;
}

void DeleteDictionary(Dictonary *Dict)
{
    for(int i = 0; i < GetSizeDictionary(Dict); i++)
    {
        DeleatString(Dict->elem[i].str);
    }
}


int GetSizeDictionary(const Dictonary *Dict)
{
    return Dict->size;
}

void ShowDict(const Dictonary *Dict)
{
    for(int i = 0; i < GetSizeDictionary(Dict); i++)
    {
        printf("[%s] => %d\n", Dict->elem[i].str->elem, Dict->elem[i].priority);
    }
}