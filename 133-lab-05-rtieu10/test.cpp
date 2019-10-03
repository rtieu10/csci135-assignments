#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"

#include "doctest.h"

//TEST_CASE("Sample tests"){
  //std::string result;
  //result=greet("Tom");

  //CHECK(result.compare("Hello Tom!")==0);

//}

// Write test cases here
TEST_CASE("Task A"){
                    //this does not make sense bc this isn't returnng a string it's a bool?
  CHECK(isDivisibleby(10,5)==1);
  CHECK(isDivisibleby(14,3)==0);
  CHECK(isDivisibleby(21,4)==0);

}

TEST_CASE("Task B"){

  CHECK(isPrime(7) == 1);
  CHECK(isPrime(15) == 0);
  CHECK(isPrime(29) == 1);



}

TEST_CASE("Task C"){

  CHECK(nextPrime(17)==19);
  CHECK(nextPrime(20)==23);
  CHECK(nextPrime(30)==31);

}

TEST_CASE("Task D"){

  CHECK(countPrimes(10,15) == 2);
  CHECK(countPrimes(20,30) == 2);
  CHECK(countPrimes(6,10) == 1);

}

TEST_CASE("Task E"){

  CHECK(isTwinPrime(13)==1);
  CHECK(isTwinPrime(20)==0);
  CHECK(isTwinPrime(19)==1);
}


TEST_CASE("Task F"){

  CHECK(nextTwinPrime(5)==7);
  CHECK(nextTwinPrime(17)==19);
  CHECK(nextTwinPrime(29)==31);

}


TEST_CASE("Task G"){

  CHECK(largestTwinPrime(3,13)==13);
  CHECK(largestTwinPrime(10,20)==19);
  CHECK(largestTwinPrime(8,10)==-1);

}
// etc.
