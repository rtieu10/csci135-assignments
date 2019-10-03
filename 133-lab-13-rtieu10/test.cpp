#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  printRange(-2,10);
  printRange(1,3);
  printRange(15,20);
}

TEST_CASE("Task B"){
  // task B tests go here
  CHECK(sumRange(1,3) == 6);
  CHECK(sumRange(-2,10) == 52);
  CHECK(sumRange(5,10) == 45);
}



TEST_CASE("Task C"){
  int size = 10;
   int *arr = new int[size];
   arr[0] = 12;
   arr[1] = 17;
   arr[2] = -5;
   arr[3] = 3;
   arr[4] = 7;
   arr[5] = -15;
   arr[6] = 27;
   arr[7] = 5;
   arr[8] = 13;
   arr[9] = -21;
   CHECK(sumArray(arr,size) == 43);
   CHECK(sumArray(arr,5) == 34);
   CHECK(sumArray(arr,7) == 46); 


}

TEST_CASE("Task D"){
  CHECK(isAlphanumeric("") == true);
  CHECK(isAlphanumeric("ABCD12345xyz") == true);
  CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}


TEST_CASE("Task E"){
  CHECK(nestedParens("((()))") == true);
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("") == true);
  CHECK(nestedParens(")(") == false);
  CHECK(nestedParens("(((") == false);
  CHECK(nestedParens("(()") == false);

}

// etc.
