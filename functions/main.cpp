/*
Michael Penta
Project/Assignemnt/Lab example
//exe 28 in chapter 6
*/
#include <iostream>


const double SMALL = 1.75;
const double MEDIUM = 1.90;
const double LARGE  = 2.00;


void printInstructions();
int printMenuAndValidate();
void printTotalCofee(int, int, int, int&);
void printTotalMoney(int, int, int, double&);

int main()
{
   int numMd =0, numSm =0, numLg =0, choice =0, totalCoffee=0;
   double money=0;
   
   printInstructions();
   
   do
   {
       choice = printMenuAndValidate();
      
       switch(choice)
       {
           case 1:
            numSm++;
           break;
           case 2:
            numMd++;
           break;
           
           case 3:
            ++numLg;
           break;
           case 4:
            std::cout<<"Pay me"<<std::endl;
           break;
           case 5:
            std::cout<<"Bye"<<std::endl;
           break;
           default:
            std::cout<<"This is an error that should never occur"<<std::endl;
           break;
           
       }
   }while(choice < 4);
   
   
    printTotalCofee(numSm, numMd, numLg, totalCoffee);
    std::cout<<"Coffees sold "<<totalCoffee<<std::endl;
    
    
    printTotalMoney(numSm, numMd, numLg, money);
    std::cout<<"Net Cash "<<money<<std::endl;
   
   
}

void printTotalCofee(int numSm, int numMd, int numLg, int& totalCoffee)
{
    totalCoffee = numSm + numMd + numLg;    

}

void printTotalMoney(int numSm, int numMd, int numLg, double& totalMoney)
{
    totalMoney = numSm * SMALL + numMd * MEDIUM + numLg * LARGE;    

}
void printInstructions()
{
    std::cout<< "THIS IS HOW YOU USE THIS"<<std::endl;
}

int printMenuAndValidate()
{
    int choice;
    std::cout<< "1 to buy sm\n2 to buy Md\n3 to buy lg\n4 to complete order\n5 to quit"<<std::endl;
    std::cin>>choice;
    
    while(choice < 1 || choice > 5)
    {
        std::cout<< "try again"<<std::endl;
        std::cin>>choice;
    }
    
    return choice;
    
}