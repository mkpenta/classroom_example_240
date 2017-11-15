#include <iostream>
#include <string>
#include "partTimeEmployee.h"
 
using namespace std; 

void printHello(personType &p);

int main()
{
    partTimeEmployee newEmp("John", "Smith", 15.34, 67);
    personType person ("Bob","Smith");

printHello(newEmp);
//printHello(person);

    return 0;
}

void printHello(personType &p)
{
    p.sayHello();
}