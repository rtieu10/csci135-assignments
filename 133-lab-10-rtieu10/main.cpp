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
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};

  TimeSlot morning = {movie1, {9,30}};
  TimeSlot afternoon = {movie2, {12,15}};

  std::cout << timeOverlap(morning, afternoon) << std::endl;

  return 0;
}
