#make file for testPolish

all: res

res: main.o String.o Pair.o Dictionary.o Config.o Stack.a
	gcc -Wall -Werror -Wextra -o res main.o String.o Pair.o Dictionary.o Config.o -L. -lStack

main.o: main.c
	gcc -c main.c

String.o: String.c
	gcc -c String.c

Pair.o: Pair.c
	gcc -c Pair.c

Dictionary.o: Dictionary.c
	gcc -c Dictionary.c

Config.o: Config.c
	gcc -c Config.c



# Form Stack to static Lib
Stack.o: Stack/Stack.c
	gcc -c Stack/Stack.c

Stack_as_template.o: Stack/Stack_as_template.c
	gcc -c Stack/Stack_as_template.c


Stack.a: Stack_as_template.o Stack.o
	ar rc libStack.a Stack_as_template.o Stack.o
	ranlib libStack.a



clean:
	rm *.o res

