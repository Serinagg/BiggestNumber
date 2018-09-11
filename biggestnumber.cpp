//Author: Serina Garcia
#include<iostream>

int main()
{
  //declare variables here
  int num;
  int num2;
  int biggest;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>num;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>num2;
  //determine if first or second is bigger and store that in a third variable
  if (num > num2){
         biggest = num;
  }
  else {
          biggest= num2;
  }
  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  std::cout<<biggest;
  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
