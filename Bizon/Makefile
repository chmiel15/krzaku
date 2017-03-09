__start__: program.out
	./program.out
CC=g++
#Makro CC zawiera nazwę kompilatora
CFLAGS=-Wall -ansi -pedantic
#Makro CFLAGS zawiera parametry kompilatora
CLINK=-lm
#Makro CLINK zawiera opcje linkera.
program.out: main.o fun1.o
	$(CC) -o program.out main.o fun1.o $(CLINK)
#Wykorzystanie kompilatora gcc (makro CC) do zlinkowania 
#programu z opcją -lm (CLINK)
main.o: main.cpp head1.h
	$(CC) -c  $(CFLAGS) main.cpp
fun1.o: fun1.cpp head1.h
	$(CC) -c  $(CFLAGS) fun1.cpp


