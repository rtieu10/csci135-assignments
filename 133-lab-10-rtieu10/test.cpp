#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

Time first = {10,30};
Time second = {13,40};
// Write test cases here
TEST_CASE("Task A"){
  // task A tests go here
  CHECK(minutesSinceMidnight(first)== 630);
  CHECK(minutesUntil(first, second) == 190);
}

TEST_CASE("Task B"){
  // task B tests go here
  Time temp = {11,30};
  Time test = addMinutes(first, 60);
  CHECK(test.h == temp.h);
  CHECK(test.m == temp.m);

}

TEST_CASE("Task D"){
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  TimeSlot morning = {movie1, {9,15}};
  TimeSlot temp = scheduleAfter(morning,movie1);

  Time end = addMinutes(morning.startTime, morning.movie.duration);
  TimeSlot check = {movie1, end};

  CHECK(temp.startTime.h == check.startTime.h);
  CHECK(temp.startTime.m == check.startTime.m);

}

TEST_CASE("TASK E"){
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};

  TimeSlot morning = {movie1, {9,30}};
  TimeSlot afternoon = {movie2, {12,15}};

  CHECK(TimeOverlap(morning, afternoon) == false);
}
// etc.
