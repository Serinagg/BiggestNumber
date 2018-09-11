//Author: Serina Garcia
#include<iostream>

int main()
{
  //declare variables here
  int num;
  int num2;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>num;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>num2;
  //determine if first or second is bigger and store that in a third variable

  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
