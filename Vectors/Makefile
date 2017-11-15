#To use this make file, navigate to the directory containing the makefile and type "make"
#		

all: main

main: main.o Person.o Person.h
	g++ -std=c++11 main.o Person.o -o main.exe

main.o: main.cpp Person.h
	g++ -std=c++11 -c main.cpp 
	
Person.o: Person.cpp Person.h
	g++ -std=c++11 -c Person.cpp
	