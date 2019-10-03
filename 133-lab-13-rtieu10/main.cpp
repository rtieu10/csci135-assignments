#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{

  // sample code
  /*std::string result;

  result=greet("Tom");
  std::cout << result <<"\n";
  // Call the functions you wrote in funcs here

  return 0;*/
  printRange(-2,10);
  std::cout << std::endl;
  std::cout << sumRange(1,3) << std::endl;
  std:cout << sumRange()
}
