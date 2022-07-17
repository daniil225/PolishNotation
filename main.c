#include<stdio.h>
#include<stdlib.h>

#include "Config.h"
#include "Stack/Stack.h"

int main()
{
    /*
    String formula;  // Исходная формула
    String res; // Формула преобразованная при помощи алгоритма Дейкстры
    InitString(&res);
    InitString(&formula);
    Dictonary *OpertionsPriority = DefaultConfigDictionary(); // Задаем стартовую конфигурацию для операций
    
    ShowDict(OpertionsPriority);
    free(OpertionsPriority);
*/
    
    TEMPLATE(Stack, double) stack;

    TEMPLATE(InitStack, double)(&stack);

    double a = 6.7;
    TEMPLATE(push, double)(&stack, &a);
    TEMPLATE(push, double)(&stack, &a);
    
    double res = TEMPLATE(pop, double)(&stack);

    printf("%.1lf\n", res);

    free(stack.element);

    


    
    return 0;
}