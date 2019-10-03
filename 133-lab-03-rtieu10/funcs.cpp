#include "funcs.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>


// Sample function

//std::string greet(std::string name){
  //return "Hello "+name+"!";
//}

// Write all your functions in here

//double east_storage(std::string x);

double east_storage(std::string x) {
  std::ifstream fin("Current_Reservoir_Levels.tsv");  //this allows us to open an input file stream

  if (fin.fail()) {     //if it doesn't read it
    std::cerr << "File cannot be opened for reading." << std::endl;   //if the file fails then return this message
    exit(1); //exit if failed to open the file
  }

  std::string junk; //creating a string variable called junk
  getline(fin, junk);  //this takes the first line of the file and gets the line and deletes it


  double storage;

  std::string date;
  double eastSt, eastEl, westSt, westEl;


  while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){  //this reads the file line by line takes 5 values each DOCTEST_CONFIG_IMPLEMENT
    fin.ignore(INT_MAX, '\n');   //ignores the data that's irrelevant, skips to the end of the line, ignores remaining columns


    if (date == x){
        storage = eastSt;
    }

  }
  fin.close();
  return storage;

}



double max_storage(){
  std::ifstream fin("Current_Reservoir_Levels.tsv");

  if (fin.fail()){
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }

  std::string junk;    //creates a string varaible called junk
  getline(fin, junk);  //gets the first line and deletes it

  std::string date;    //?

  double eastSt, eastEl, westSt, westEl;

  double max;
  max = eastSt;    //set the max to the eastSt, so we can compare the two variables, this sets max to the first value on the storage list

  while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){   //goes through all the values
    fin.ignore(INT_MAX, '\n');       //ignore the other lines and go to the end of the line

    if (eastSt > max){   //if the value of eastSt is greater than the max value, max gets reset
      max = eastSt;
    }

  }
  fin.close();     //closes the file
  return max;
}





double min_storage(){
  std::ifstream fin("Current_Reservoir_Levels.tsv");

  if (fin.fail()){
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }

  std::string junk;
  getline(fin, junk);

  std::string date;

  double eastSt, eastEl, westSt, westEl;

  double min;
//  min = eastSt;   //this does not work bc it sets it to 0 and 0 will always be less than any input from the tsv
  fin >> date >> min;  //sends the first input to the variable min

  while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    fin.ignore(INT_MAX, '\n');

    if (eastSt < min){
      min = eastSt;
    }

  }

  fin.close();
  return min;

}





void compare_basins(std::string date1, std::string date2){    //void bc you arent technically returning anything, you're only printing
  std::ifstream fin("Current_Reservoir_Levels.tsv");

  if (fin.fail()){
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }

  std::string junk;
  getline(fin, junk);

  //std::string d1;
  //std::string d2;
  std::string date;

  double eastSt, eastEl, westSt, westEl;

  //double result
  //fin >>date >> result;

  while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    fin.ignore(INT_MAX, '\n');
    if (date >= date1 && date <= date2 ){         //if the date is between the two indicated dates
      if (eastEl > westEl){                        //if east elevation is greater than west elevation print east
        std::cout << date << " East" << std::endl;
      }
      else if (eastEl < westEl){
        std::cout << date << " West" << std::endl;
      }
      else {
        std::cout << date << " Equal" << std::endl;
      }

    }
  }
fin.close();

}





void reverse_order(std::string date1, std::string date2){
  std::ifstream fin("Current_Reservoir_Levels.tsv");

  if (fin.fail()){
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1);
  }

  std::string junk;
  getline(fin,junk);

  std::string date;
  int index = 0;
  double westElev[365];                   //an array storing the elevations
  std::string dateArray[365];            //an array storing the strings of dates
  double eastSt, eastEl, westSt, westEl;

while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
  fin.ignore(INT_MAX, '\n');

  if(date >= date1 && date <= date2){    //if the input is between the two dates, that are inputted
    westElev[index] = westEl;            //the index in the westElev array and the dateArray array are the same
    dateArray[index] = date;

    index++;                            //add one to the index throughout the loop, so it will go through every element in the list
  }

}

for (int i = index-1; i >=0; i--){     //it goes through everything in the array, and prints the date and elevation
  std::cout << dateArray[i] << " " << westElev[i] << std::endl;

}

fin.close();


}
