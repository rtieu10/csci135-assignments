#include <iostream> //included here and not in the other files, a lot of include statements not needed
#include "smaller.h" //includes the smaller & smaller3 function into the file
#include "month.h"  //includes the month & leap function

int main(){

std::cout << smaller(5,10) << std::endl;     //test cases for each function
std::cout << smaller3(3,7,12) << std::endl;

std::cout << month(2019, 4) << std::endl;
std::cout << leap(2001) << std::endl;




}
