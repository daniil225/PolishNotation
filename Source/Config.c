#include <stdlib.h>
#include "../Libs/Dictionary.h"


Dictonary* DefaultConfigDictionary()
{
    Dictonary *Dict = malloc(sizeof(Dictonary));
    InitDictionary(Dict);
    // Формирование таблицы приоритетов функций и операций
    InputDictionary(Dict, MakePair(CharStrToString("ln"), 3));
    InputDictionary(Dict, MakePair(CharStrToString("sqrt"), 3));
    InputDictionary(Dict, MakePair(CharStrToString("sin"), 3));
    InputDictionary(Dict, MakePair(CharStrToString("cos"), 3));
    InputDictionary(Dict, MakePair(CharStrToString("tg"), 3));
    InputDictionary(Dict, MakePair(CharStrToString("ctg"), 3));
    InputDictionary(Dict, MakePair(CharStrToString("~"), 3));

    InputDictionary(Dict, MakePair(CharStrToString("*"), 2));
    InputDictionary(Dict, MakePair(CharStrToString("/"), 2));

    InputDictionary(Dict, MakePair(CharStrToString("+"), 1));
    InputDictionary(Dict, MakePair(CharStrToString("-"), 1));

    InputDictionary(Dict, MakePair(CharStrToString("("), 0));


}
