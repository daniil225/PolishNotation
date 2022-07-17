#include "template.h"
#include "../Libs/String.h"

#ifdef T
#undef T
#endif

#define T String
#include "Stack_as_template.c"
#ifdef T
#undef T
#endif


#define T double
#include "Stack_as_template.c"
#ifdef T
#undef T
#endif


#define T int
#include "Stack_as_template.c"