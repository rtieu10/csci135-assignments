#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "profile.h"
#include "network.h"
#include "doctest.h"

// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  Profile p1("marco", "Marco");
  CHECK(p1.getUsername() == "marco");
  CHECK(p1.getFullName() == "Marco");

  p1.setDisplayName("Marco Rossi");
  CHECK(p1.getFullName() == "Marco Rossi");
}

TEST_CASE("Task B"){
  // task B tests go here
  Network nw;
  CHECK(nw.addUser("mario", "Mario") == true);
  CHECK(nw.addUser("luigi", "Luigi") == true);

  CHECK(nw.addUser("mario", "Mario2") == false);
  CHECK(nw.addUser("luigi", "Luigi2") == false);
  CHECK(nw.addUser("mario 2", "Mario2") == false);
}


TEST_CASE("TASK C"){
  Network nw;

  nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

}

TEST_CASE("TASK D"){
  Network nw;
  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");

  CHECK(nw.writePost("mario", "It's a-me, Mario!") == true);
  CHECK(nw.writePost("luigi", "Hey hey!") == true);
  CHECK(nw.writePost("yoshi", "Hi Luigi!") == true);

}
