#ifndef _STRING_H_
#define _STRING_H_


#define STRING_SIZE 10

typedef struct String
{
    char *elem;
    int length;
    int MaxLengt;
}String;



void InitString(String *str);

int InputString(String *str);

int InputCharToString(String *str, char ch);

String* CharStrToString(char *str);
String* CharSimbolToString(char c);

// Input:
// String *str1 String *str2
// res write to str1 format (str1)(str2) without ()
// ret: void
void ConcatString(String *str1, String *str2);

// ret: int
// 0 => str1 == str2
// -1 => str1 < str2
// 1 => str1 > str2
int CmpString(String *str1, String *str2);

int LenghtString(const String *string);


void PrintString(const String *str);

char GetSimbolByIndex(const String *str, int index);

void DeleatString(String *string);


#endif