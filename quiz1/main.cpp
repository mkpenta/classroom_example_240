/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/
#include <iostream>

//#define NDEBUG
#include <cassert>

int main()
{
    int n1, n2, n3 ;
    std::cout << "enter 3 int"<< std::endl;
    std::cin >> n1 >> n2 >> n3;
    
    int sum = n1 + n2 + n3;
    
    assert(n1/n2);
    
    float avg = sum/3.0;
 
    std::cout<<" values "  << n1 <<" " << n2<<" "  << n3<<" " << sum<<" "  << avg<< std::endl;
}