#include<stdio.h>
#include <string.h>
#include "../Stack/Stack.h"
#include "../Libs/Config.h"
#include "Parser.h"

void InfexToPolish(String *res)
{
    String *InfexFormula = CharStrToString("cos(sin(2*x))");
    
    TEMPLATE(Stack, String) stack;
    TEMPLATE(InitStack, String)(&stack);


    for(int i = 0; i < LenghtString(InfexFormula); i++)
    {
        char ch = GetSimbolByIndex(InfexFormula, i);
        if(CmpString(CharSimbolToString(ch), CharSimbolToString('(')))
        {
            printf("%c", ch);
        }
    }
}
