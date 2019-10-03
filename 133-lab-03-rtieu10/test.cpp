#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

//TEST_CASE("Sample tests"){
  //std::string result;
  //result=greet("Tom");

  //CHECK(result.compare("Hello Tom!")==0);

//
// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  CHECK(east_storage("01/05/2018") == 59.88);
  CHECK(east_storage("05/23/2018") == 81.01);
  CHECK(east_storage("08/01/2018") == 76.5);
}

TEST_CASE("Task B"){
  // task B tests go here
  CHECK(max_storage() == 81.07);
  CHECK(min_storage() == 43.18);

}

TEST_CASE("Task C"){
  CHECK(compare_basins("05/20/2018", "05/24/2018")==
  "05/24/2018 West\n05/23/2018 West\n05/22/2018 West\n05/21/2018 West\n05/20/2018 West");

  CHECK(compare_basins("01/01/2018", "0/06/2018"==
  "01/06/2018 East\n01/05/2018 East\n01/04/2018 West\n01/03/2018 West\n01/02/2018 West\n01/01/2018 West");


}

TEST_CASE("Task D"){
  CHECK(compare(reverse_order("04/10/2018","04/15/2018")==
  "04/10/2018 585.71\n04/11/2018 585.56\n04/12/2018 585.4\n04/13/2018 585.4\n04/13/2018 585.35\n04/14/2018 585.37\n04/15/2018 585.53");

  CHECK(compare(reverse_order("10/10/2018", "10/14/2018"))==
  "10/10/2018 581.3\n10/11/2018 580.98\n10/12/2018 581.11\n10/13/2018 580.9\n10/14/2019 580.65"); 
  )

}

// etc.
