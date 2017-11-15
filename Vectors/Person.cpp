#include "Person.h"

void Person::setName(std::string n)
{
	name = n;
}
std::string Person::getName() const
{
	return name;
}


Person::Person(std::string n, int a)
{
	name = n;
	age = a;
}

void Person::setAge(int n) 
{
	age = n;
}
int Person::getAge() const
{
	return age;
}
