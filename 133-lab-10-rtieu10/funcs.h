#pragma once

#include <iostream>


// sample signature
//std::string greet(std::string name);


// Write your function signatures / prototypes here
class Time{
public:
  int h;
  int m;

};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie{
public:
  std::string title;
  Genre genre;
  int duration;   //mins

};

class TimeSlot{
public:
  Movie movie;   //we have a type from the Movie clas and stores it under the movie object
  Time startTime;

};

void printTime(Time time);
int toMinutes(Time time);
Time toTime(int minutes);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
void printMovie(Movie mv);
void printTimeSlot(TimeSlot ts);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool TimeOverlap(TimeSlot ts1, TimeSlot ts2);
