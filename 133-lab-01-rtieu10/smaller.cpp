#include <iostream>

char smaller(int number1,int number2){
  //int number1;
  //int number2;

  //std::cout << "Enter the first number: " << std::endl;
  //std::cin >> number1;
  //std::cout << "Enter the second number: " << std::endl;
  //std::cin >> number2;

  if (number1 > number2){
  std::cout << "The smaller of the two is " << number2 << std::endl;
  }

  else if (number2 > number1){
  std::cout << "The smaller of the two is " << number1 << std::endl;
  }

  else if (number2 == number1){
  std::cout << "The two numbers are equal" << std::endl;
  }
  return 0;
}


char smaller3(int x, int y, int z){
  //int x;
  //int y;
  //int z;
  int smaller;

  //std::cout << "Enter the first number: " << std::endl;
  //std::cin >> x;
  //std::cout << "Enter the second number: " << std::endl;
  //std::cin >> y;
  //std::cout << "Enter the third number: " << std::endl;
  //std::cin >> z;

  if (y > x && z > x){

  smaller = x;

  }

  else if (x > y && z > y){

  smaller = y;

  }

  else if (y > z && x > z){

  smaller = z;


  }

  std::cout << "The smallest of the three is " << smaller << std::endl;

  return 0;
}
