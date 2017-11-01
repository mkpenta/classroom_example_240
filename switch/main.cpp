/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/
#include <iostream>

int main()
{
    int choice;
    std::cout<<"1. for one liner\n2. pun\n3.nonsense\n"<<std::endl;
    std::cout << "enter a number"<< std::endl;
    std::cin>>choice;
    
    while(choice < 1 || choice > 3)
    {
        std::cout << "enter a number"<< std::endl;
        std::cin>>choice;
    }
    
    switch(choice)
    {
        case 1:
             std::cout <<"I got a body tattoo of myself only slightly larger"<<std::endl;
            break;
            
        case 2:
             std::cout <<"you look beat, said the toast to the eggs"<<std::endl;
            break;
            
        case 3:
             std::cout <<"veal cutlet came down and bit the shit out of my coffee - coffe wasnt strng enough to defend itself"<<std::endl;
            break;
        default:
            
            break;
    }
    
}