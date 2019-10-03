#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main()
{

  // sample code
  //std::string result;

  //result=greet("Tom");
  //std::cout << result <<"\n";
  // Call the functions you wrote in funcs here
  std::cout << "East storage on 01/05/2018: " << east_storage("01/05/2018") << std::endl;
  std::cout << east_storage("05/23/2018") << " " << east_storage("08/01/2018") << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << "Max east storage: " << max_storage() << std::endl;
  std::cout << "Min east storage: " << min_storage() << std::endl;
  std::cout << "------------------------" << std::endl;
  compare_basins("05/20/2018" , "05/24/2018");
  std::cout << "------------------------" << std::endl;
  compare_basins("01/01/2018" , "01/06/2018");
  std::cout << "------------------------" << std::endl;
  reverse_order("04/10/2018" , "04/15/2018");
  std::cout << "------------------------" << std::endl;
  reverse_order("10/10/2018", "10/14/2018");
}
