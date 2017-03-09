__start__: program.out
	./program.out

program.out: main.o fun1.o
	g++ program.out -o main.o fun1.o
main.o: main.cpp head1.h head2.h
	g++ -c main.cpp
fun1.o: fun1.cpp head1.h head2.h
	g++ -c fun1.h


