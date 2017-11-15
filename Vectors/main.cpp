//http://www.cplusplus.com/reference/vector/vector/
#include <iostream>
#include <vector>
#include "Person.h"

void printVector(std::vector<double> list);

int main()
{
    std::vector<double> list (10);
    std::vector<double> otherlist;
    
    list.push_back(3.1);
    otherlist.push_back(3.1);
    
    list.push_back(4.2);
    otherlist.push_back(4.2);
    
    std::cout<<"size list "<<list.size()<<std::endl;
    std::cout<<"capacity list "<<list.capacity()<<std::endl;
    std::cout<<"maz size list "<<list.max_size()<<std::endl;
    
    std::cout<<"size otherlist "<<otherlist.size()<<std::endl;
    std::cout<<"capacity otherlist "<<otherlist.capacity()<<std::endl;
    std::cout<<"maz size otherlist "<<otherlist.max_size()<<std::endl;
    
    //**************
    //** looping and vectors
    //******************
    //make an iterator
    std::vector<double>::iterator iter;
    //set it to the begining
    iter = list.begin();
    
    //loop until the end
    std::cout<<"[";
    while(iter != list.end())
    {
        std::cout<<" "<<*iter<<" ";
        ++iter;//advance to the next element
    }    
    std::cout<<"]"<<std::endl;

    //printing as a function 
    printVector(otherlist); 
    
      
    //**************
    //** more vector operations
    //******************
    
    double n = list.back(); //gets the item at the back
    list.pop_back(); //removes the item at the back returns void
    list.insert(list.begin()+2,3.0);
    printVector(list);
    list.erase(list.begin()+1);
    list[5] = 44;
    printVector(list);
    
    //**************
    //** vectors and objects
    //*****************
    std::vector<Person> group;
    std::vector<Person*> group_with_ptrs;
      
    Person p("Frank", 42);
    group.push_back(p);
    
    group_with_ptrs.push_back(new Person("Billy", 19));
    
}

void printVector(std::vector<double> list)
{
    std::cout<<"size "<<list.size()<<std::endl;
    std::cout<<"capacity "<<list.capacity()<<std::endl;
    std::vector<double>::iterator it;
    std::cout<<"[";
    for (it = list.begin() ; it != list.end(); ++it)
    {
        std::cout<<" "<<*it<<" ";
    }    
    std::cout<<"]"<<std::endl;
    
}