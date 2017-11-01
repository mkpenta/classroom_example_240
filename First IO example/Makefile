#To use this make file, navigate to the directory containing the makefile and type "make"
#		

all: main

main: main.o
		g++ -std=c++1y -o main main.o

main.o: main.cpp
	g++ -c -std=c++1y main.cpp
	
clean:
	rm *.o main
