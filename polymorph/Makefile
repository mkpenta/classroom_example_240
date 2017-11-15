#To use this make file, navigate to the directory containing the makefile and type "make"
#		https://www.cs.bu.edu/teaching/cpp/writing-makefiles/

all: main

main: main.o personTypeImp.o partTimeEmployeeImp.o
	g++ -std=c++11 main.o partTimeEmployeeImp.o personTypeImp.o -o main.exe

main.o: main.cpp personType.h partTimeEmployee.h
	g++ -std=c++11 -c main.cpp

partTimeEmployeeImp.o: personType.h partTimeEmployeeImp.cpp
	g++ -std=c++11 -c partTimeEmployeeImp.cpp

personTypeImp.o: personTypeImp.cpp
	g++ -std=c++11 -c personTypeImp.cpp
	
clean:
	rm *.o *.exe
