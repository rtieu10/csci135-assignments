#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  test_ascii("Cat :3 Dog");
  //std::cout << "----------------TASK A------------------\n";

}

TEST_CASE("Task B"){
   //task B tests go here
  CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
  //std::cout << shiftChar('A',5) << std::endl;
  //std::cout << shiftChar('Z',4) << std::endl;
}

// etc.

TEST_CASE("Task C"){

  CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");

}



TEST_CASE("Task D"){
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");

}
