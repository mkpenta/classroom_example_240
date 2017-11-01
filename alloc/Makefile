#To use this make file, navigate to the directory containing the makefile and type "make"
#		

all: main

main: main.o Person.o
	g++ main.o Person.o -o hello

main.o: main.c
    g++ -c main.c

Person.o: Person.cpp
   g++ -c Person.cpp
