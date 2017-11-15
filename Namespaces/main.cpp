
#include <iostream>

namespace globalNames
{
    int number;
    const double PI = 3.14;
}

int main()
{
  int number = 3;
  globalNames::number = 4;
  
  std::cout<<number<<std::endl;
  std::cout<<globalNames::number<<std::endl;
}