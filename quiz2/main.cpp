/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/
#include <iostream>


int main()
{
    int n1, n2 ;
    int total = 0;
    std::cout << "enter 2 int"<< std::endl;
    std::cin >> n1 >> n2;
    
   
   if(n1 > n2)
   {
       std::cout<<"first must be less than last foo\'"<<std::endl;
   }
   else
   {
       for(int i = n1; i <= n2; ++i)
       {
           total += i;
       }
   }
   
    std::cout<<" values "  << n1 <<" " << n2<<" "  << total<<std::endl;
}