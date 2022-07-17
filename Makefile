#make file for testPolish

all: res

res: main.o String.o Pair.o Dictionary.o Config.o Parser.o Stack.a
	gcc -Wall -Werror -Wextra -o res main.o String.o Pair.o Dictionary.o Config.o Parser.o -L. -lStack

main.o: main.c
	gcc -c main.c

String.o: Source/String.c
	gcc -c Source/String.c

Pair.o: Source/Pair.c
	gcc -c Source/Pair.c

Dictionary.o: Source/Dictionary.c
	gcc -c Source/Dictionary.c

Config.o: Source/Config.c
	gcc -c Source/Config.c


Parser.o: Parser/Parser.c
	gcc -c Parser/Parser.c

# Form Stack to static Lib
Stack.o: Stack/Stack.c
	gcc -c Stack/Stack.c

Stack_as_template.o: Stack/Stack_as_template.c
	gcc -c Stack/Stack_as_template.c


Stack.a: Stack_as_template.o Stack.o
	ar rc libStack.a Stack_as_template.o Stack.o
	ranlib libStack.a



clean:
	rm *.o *.a res

