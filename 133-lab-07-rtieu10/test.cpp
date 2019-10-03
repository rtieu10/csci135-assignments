#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"

#include "doctest.h"

//TEST_CASE("Sample tests"){
  //std::string result;
  //result=greet("Tom");

  //CHECK(result.compare("Hello Tom!")==0);
//
//}

// Write test cases here
TEST_CASE("Task A"){
  CHECK(removeLeadingSpaces("        int x = 1;") == "int x = 1;");
  CHECK(removeLeadingSpaces("            return count;")=="return count;");
  CHECK(removeLeadingSpaces("       charcount += 1") == "charcount += 1");
}

TEST_CASE("Task B"){
  CHECK(countChar("Hello",'l') == 2);
  CHECK(countChar("for (int i = 0; i < line.length(); i++){", '{') == 1);
  CHECK(countChar("int c;",'c') == 1);



}
//TEST_CASE("Task B"){

//}

// etc.
