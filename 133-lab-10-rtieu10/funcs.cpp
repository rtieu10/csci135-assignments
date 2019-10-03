#include "funcs.h"
#include <iostream>


// Sample function

/*std::string greet(std::string name){
  return "Hello "+name+"!";
}*/

// Write all your functions in here

void printTime(Time time){
  std::cout << time.h << ":" << time.m;
}

int toMinutes(Time time){ //this function will convert it to minutes
  int minutes;
  minutes = (time.h * 60) + time.m;
  return minutes;
}

Time toTime(int minutes){
  Time temp = {0,0};
  temp.h = minutes / 60;  //the hours will be defined by minutes / 60
  temp.m = minutes % 60;  //minutes are the remainder
  return temp;

}

int minutesSinceMidnight(Time time){  //this will find the amount of time since midnight (0,0)
  return toMinutes(time);

}

int minutesUntil(Time earlier, Time later){
  int early = toMinutes(earlier);
  int late = toMinutes(later);
  int until = late - early;
  return until;  
}

Time addMinutes(Time time0, int min){
  int mins = toMinutes(time0) + min;
  Time newtime;
  newtime.h = mins / 60;
  newtime.m = mins % 60;
  return newtime;
}

void printMovie(Movie mv){
  std::string g;
  switch (mv.genre){
    case ACTION: g = "ACTION";
    break;
    case COMEDY: g = "COMEDY";
    break;
    case DRAMA: g = "ROMANCE";
    break;
    case ROMANCE: g = "THRILLER";
    break;
  }

  std::cout << mv.title << " " << g << " (" << mv.duration << " min)";

}


void printTimeSlot(TimeSlot ts){
  printMovie(ts.movie);   //this will print the movie title, genre, and duration
  std::cout << "[starts at ";
  printTime(ts.startTime);
  std::cout << " ends by ";
  printTime(addMinutes(ts.startTime, ts.movie.duration)); //this will add the start time and the duration of the movie
  std::cout << "]" << std::endl;
}


TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
  Time end = addMinutes(ts.startTime, ts.movie.duration);   //this creates a variable called end from the time class, and gets the time that it starts + duration
  TimeSlot next = {nextMovie, end};  //creates a variable called next from TImeSlot class, and gets the name of the nextmovie, and the end time and makes that the new startime
  return next;
}


bool TimeOverlap(TimeSlot ts1, TimeSlot ts2){
  TimeSlot earlier;
  TimeSlot later;
  if(minutesUntil(ts1.startTime, ts2.startTime) > 0){
    earlier = ts1;
    later = ts2;
  }
  else{
    earlier = ts2;
    later = ts1;
  }

  int interval = toMinutes(later.startTime) - toMinutes(earlier.startTime);

  if(ts1.movie.duration > interval){
    return true;
  }
  else{
    return false;
  }

}
