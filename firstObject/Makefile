#To use this make file, navigate to the directory containing the makefile and type "make"
#		https://www.cs.bu.edu/teaching/cpp/writing-makefiles/

all: main

main: main.o Person.o
	g++ -std=c++11 main.o Person.o -o main.exe

main.o: main.cpp Person.h
	g++ -std=c++11 -c main.cpp

Person.o: Person.cpp
	g++ -std=c++11 -c Person.cpp
	
clean:
	rm *.o *.exe
