#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

Coord3D *p1 = createCoord3D(10,20,30);
Coord3D *p2 = createCoord3D(-20,21,-22);
Coord3D *p3 = createCoord3D(20,40,40);
Coord3D *vel = createCoord3D(1,1,1);
// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  CHECK(length(p3)== 60.0);
  CHECK(length(p1) == 37.416573867739413855837487323165493017560198077787269);
}

TEST_CASE("Task B"){
  // task B tests go here
  CHECK(fartherfromOrigin(p1,p3)==p3);
  CHECK(fartherfromOrigin(p2,p3)==p3);
  CHECK(fartherfromOrigin(p1,p2)==p1); 

}

TEST_CASE("Task C"){
  move(p1, vel, 1);
  CHECK((*p1).x == 11);
  CHECK((*p1).y == 21);
  CHECK((*p1).z == 31);

}

// etc.
