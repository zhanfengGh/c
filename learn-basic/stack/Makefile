main: main.o stack.o
	gcc stack/stack.o main.o -o a.out

main.o: main.c stack/stack.h
	gcc -c main.c

stack.o: stack/stack.h stack/stack.c
	gcc -c stack/stack.c -o stack/stack.o
