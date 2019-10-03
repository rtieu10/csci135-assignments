#include <iostream>

int main(){

  int input;

  std::cout << "Please enter an integer" << std::endl;
  std::cin >> input;

  if (input > 0 && input < 100){
  std::cout << "Number squared is " << input*input << std::endl;

  }
   while (input >= 100 || input <= 0 ){

    std::cout << "Please re-enter: " << std::endl;
    std::cin >> input;

    if (input > 0 && input < 100){
    std::cout << "Number squared is " << input*input << std::endl;
    }

   }

   return 0;

  }
