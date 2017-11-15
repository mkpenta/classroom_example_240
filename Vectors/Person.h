

#ifndef _PERSON_H
#define _PERSON_H

#include<string> //c++ strings

class Person
{
	public:
		Person(std::string = "mike", int = 20);

		void printInfo();
		void setName(std::string Name);
		std::string getName() const;
		void setAge(int n);
		int getAge() const;
	
	
	private:
		std::string name = "BOB";
		int age = 33;
};
#endif