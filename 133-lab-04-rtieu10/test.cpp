#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"

#include "doctest.h"

/*TEST_CASE("Sample tests"){
  std::string result;
  result=greet("Tom");

  CHECK(result.compare("Hello Tom!")==0);

}

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  /* You might have the following her
     std::string result = rect(5,3);

     std::cout << "----------- TASK A - rect ----------\n";
     std::string result = rect(5,3);
     std::cout << " rect(5,3):\n"
     std::cout << result
     std::cout << " rect(3,5):\n"
     result = rect(3,5);
     std::cout << result
     std::cout << "\n\n";x

  */

TEST_CASE("Task A"){
  std::cout << "-----------------TASK A - rect ------------\n";
  std::cout << "rect(5,3):\n";
  std::string result = rect(5,3);
  std::cout << result;
  std::cout << " ----------------------\n";
  std::cout << "rect(6,4);\n";
  result = rect(6,4);
  std::cout << result;
  std::cout << "\n\n";



}

TEST_CASE("Task B"){
  // task B tests go here
  std::cout << "----------------TASK B - Checkerboard---------\n";
  std::cout << "checkerboard(11,5):\n";
  std::string result = checkerboard(11,6);
  std::cout << result;
  std::cout << "-----------------------\n";
  std::cout << "checkerboard(15,8):\n";
  result = checkerboard(15,8);
  std::cout << result;
  std::cout << "\n\n";


}

TEST_CASE("Task C"){
  std::cout << "-----------------TASK C - Cross---------------\n";
  std::cout << "cross(8):\n";
  std::string result = cross(8);
  std::cout << result;
  std::cout << "------------------------\n";
  std::cout << "cross(5):\n";
  result = cross(5);
  std::cout << result;


}


TEST_CASE("Task D"){
  std::cout << "-----------------TASK D - Lower Triangle----------\n";
  std::cout << "lower(10):\n";
  std::string result = lower(10);
  std::cout << result;
  std::cout << "-------------------------\n";
  std::cout << "lower(6):\n";
  result = lower(6);
  std::cout << result;

}


TEST_CASE("Task E"){
  std::cout << "------------------TASK E - Upper Triangle-----------\n";
  std::cout << "upper(10):\n";
  std::string result = upper(10);
  std::cout << result;
  std::cout << "-------------------------\n";
  std::cout << "upper(6):\n";
  result = upper(6);
  std::cout << result;

}


TEST_CASE("Task F"){
  std::cout << "-------------------TASK F - Trapezoid ----------------\n";
  std::cout << "trapezoid(12,5):\n";
  std::string result = trapezoid(12,5);
  std::cout << result;
  std::cout << "-------------------------\n";
  std::cout << "trapezoid(20,6):\n";
  result = trapezoid(20,6);
  std::cout << result;


}



TEST_CASE("Task G"){
  std::cout << "---------------------TASK G - 3*3 Checkerboard----------\n";
  std::cout << "fullcheckerboard(16,11):\n";
  std::string result = fullcheckerboard(16,11);
  std::cout << result;
  std::cout << "-------------------------\n";
  std::cout << "fullcheckerboard(27,15):\n";
  result = fullcheckerboard(27,15);
  std::cout << result;





}

// etc.
