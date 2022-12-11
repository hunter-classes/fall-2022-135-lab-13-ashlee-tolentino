main: main.o recursion.o
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o


recursion.o: recursion.cpp recursion.h

main.o: main.cpp recursion.h

tests.o: tests.cpp doctest.h recursion.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o tests.o recursion.o
