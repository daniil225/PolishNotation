#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "String.h"

void InitString(String *str)
{
    char *st = (char*)malloc(STRING_SIZE*sizeof(char));
    str->elem = st;
    str->length = 0;
    str->MaxLengt = STRING_SIZE;
}



int InputString(String *str)
{
    char ch;
    int res = 0;

    do
    {
        ch = getchar();  
        if(str->length < str->MaxLengt-1)
        {
            str->elem[str->length] = ch;
            str->length++;
        } 
        else
        {
            str->MaxLengt += STRING_SIZE;
            str->elem = (char*)realloc(str->elem, str->MaxLengt);
            if(!str->elem) 
                res = 1;
            else 
            {
                str->elem[str->length] = ch;
                str->length++;
            }
        }
    }while (ch != 10);


    str->elem[str->length-1] = '\0';
    return res;
}

int InputCharToString(String *str, char ch)
{
    int res = 0;
  
    if(str->length < str->MaxLengt-1)
    {
        str->elem[str->length] = ch;
        str->length++;
    } 
    else
    {
        str->MaxLengt += STRING_SIZE;
        str->elem = (char*)realloc(str->elem, str->MaxLengt);
        if(!str->elem) 
            res = 1;
        else 
        {
            str->elem[str->length] = ch;
            str->length++;
        }
    }
    

    str->elem[str->length-1] = '\0';
    return res;
}

String* CharStrToString(char *str)
{
    String *string = malloc(sizeof(String));
    int size = strlen(str);
    string->length = size;
    string->MaxLengt = size;
    string->elem = malloc(size*sizeof(char));
    strcpy(string->elem, str);
    return string;
}
String* CharSimbolToString(char c)
{
    String *string = malloc(sizeof(String));
    string->length = 2;
    string->MaxLengt = 2;
    string->elem = malloc(2*sizeof(char));
    string->elem[0] = c;
    string->elem[1] = '\0';
    return string;
}

// Input:
// String *str1 String *str2
// res write to str1 format (str1)(str2) without ()
// ret: void
void ConcatString(String *str1, String *str2)
{

    str1->elem = realloc(str1->elem, str1->length + str2->length);
    str1->MaxLengt += str2->MaxLengt;
    for(int i = str1->length, j = 0; i < str1->length+str2->length; i++, j++)
        str1->elem[i] = str2->elem[j];
    
    str1->length+=str2->length;
    str1->elem[str1->length] = '\0';
}

// ret: int
// 0 => str1 == str2
// -1 => str1 < str2
// 1 => str1 > str2
int CmpString(String *str1, String *str2)
{
    return strcmp(str1->elem, str2->elem);
}




char GetSimbolByIndex(const String *str, int index)
{
    return str->elem[index];
}

int LenghtString(const String *string)
{
    return string->length;
}

void PrintString(const String *str)
{
    printf("%s\n", str->elem);
}

void DeleatString(String *string)
{
    free(string->elem);
    free(string);
}