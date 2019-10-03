#include <iostream>


int month(int year, int month){
//int year;
//int month;

//std::cout << "Enter year: " << std::endl;
//std::cin >> year;
//std::cout << "Enter month: " << std::endl;
//std::cin >> month;

if (month == 1){
  return 31;
}

if (month == 2){
  if (year % 4 != 0){
    return 28;
  }

  else if (year % 100 != 0){
    return 29;

  }

  else if (year % 400 != 0){
    return 28;
  }

  else {
    return 29;
  }

}

if (month == 3){
return 31;
}

if (month == 4){
  return 30;
}

if (month == 5){
  return 31;
}

if (month == 6){
  return 30;
}

if (month == 7){
  return 31;
}

if (month == 8){
  return 31;
}

if (month == 9){
  return 30;
}

if (month == 10){
  return 31;
}

if (month == 11){
  return 30;
}

if (month == 12) {
  return 31;
}
  return 0;
}

char leap(int year){

//int year;

//std::cout << "Please enter a year:" << std::endl;
//std::cin >> year;

if (year % 4 != 0){
  std::cout << "Common Year" << std::endl;
  //return false;  //when returning the specific data type, you can just type return, instead of printing with cout

}

else if (year % 100 != 0){
  std::cout << "Leap Year" << std::endl;
  //return true;  //will return 1 to indicate true, 0 for false

}

else if (year % 400 != 0){
  std::cout << "Common Year" << std::endl;
  //return false;

}

else {
  std::cout << "Leap Year" << std::endl;
  //return true;

}
return 0;
}
