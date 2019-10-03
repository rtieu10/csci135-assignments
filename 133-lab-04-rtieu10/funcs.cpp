#include "funcs.h"
#include <iostream>


// Sample function

//std::string greet(std::string name){
  //return "Hello "+name+"!";
//}

// Write all your functions in here



// RECTANGLE
std::string rect(int width, int height){
  //int h;
  //int w;
  std::string result = "";
  std::cout << "Shape: " << std::endl;
  for (int i = 0; i < height; i++) {     //runs the loop as long as i is less than the height, i increments each time, this runs the loop "height" times
    for (int z= 0; z < width; z++ ){    // runs the loop as long as z is less than the width, and z increments each time
      //std::cout << "*";                 //prints a asterik each time
      result = result + "*";              //adds a star to the string you want to return
    }
    //std::cout << std::endl;            //each time the first for loop runs it will run on a new line
    result = result + "\n";              //adding this allows us to start a new line
  }

  return result;
}



//CHECKERBOARD
std::string checkerboard(int width, int height){    //  CEHCKERBOARD (not sure if it works ), use the paramters if you can
  std::string result = "";

  for(int row = 0; row < width; row++){
    for(int col = 0; col < width; col++){
      //std::cout << "*";
      //std::cout << " ";
      if ((row + col) % 2 == 0){
        result = result + "*";
      }

      else{
        result = result + " ";
      }

    }
    //std::cout << std::endl;
    result = result + "\n";
  }
return result;
}



//CROSS
std::string cross(int size){
  std::string result = "";
  for (int i = 0; i < size; i++){    //keeps track of what line we are on
    for (int j = 0; j < size; j++){  //keeps track of what part of the line we are on
      if(j==i||j==(size-1)-i){
        result = result + "*";  //outputs *
      }
      else {
        result = result + " ";  //outputs space
      }
    }
    result = result + "\n";    //goes to next line
  }
  return result;
}



//LOWER RECT
std::string lower(int sidelength){  //LOWER HALF OF SQUARE
//  int sidelen;

  std::string halfsquare = "*";    //creates a string called halfsquare that only contains one star

  for (int i = 0; i < sidelength; i++){              //this loop will run the same amount of times as the value of sidelength
    std::cout << halfsquare << std::endl;            //prints the string and moves to a new line
    halfsquare = halfsquare + "*";                   //each time after it prints it will add one asterik to the string, and run through it again
  }
  return halfsquare;                                 //returning the string;

  }



//UPPER RECT
std::string upper(int sidelength){     //UPPER HALF OF SQUARE
  //int sidelen;

  int spaces = sidelength;    //this is bc you only need you are going to run through the spaces loop the same amount of times as he number thats inputted
  int stars = sidelength;     // the first line of the output will have the same amount of stars as the user input

  std::string result = "";

  for(int i = 0; i < sidelength; i++){     //this loop will run the same amount of times as the number thats entered, bc thats the number of lines we need as well as the number of stars in the first line
    //std::cout << "*";
    for(int z = 0; z < spaces; z++){       // this will run through 5 times
      //std::cout << "*";
      //std::cout << " ";
      result = result + " ";              //since the program askas to return a string, we have to make what is returned in thr form of a string

    }

    for(int x = 0; x < stars; x++){       //this will also run 5 times
      //std::cout << "*";
      result = result + "*";

    }
  //  std::cout << "*" << std::endl;
    spaces = spaces + 1;                 //here i am redefining spaces bc the amount od spaces increases with each loop
    stars = stars - 1 ;                  //here i am redefiinin stars bc the amount of stars decreases by 1 each loop
    //std::cout << std::endl;              //here is where i move the cursor to a new line, it moves to a new line
    result = result + "\n";              //since we are asked to return a string we are adding \n to the result, so that we can start a new line
  }
  return result;                         //here we are returning the string
  }




//TRAPEZOID
std::string trapezoid(int width, int height){      //TRAPEZOID
  //int w;      //width
  //int h;      //height
  int spaces;
  int stars;
  std::string result = "";

  spaces = 0;        //spaces stars off as 0 becase in the first line we dont have any spaces
  stars = width;     //stars starts off as equal to the width because the first line has the same amount of stars as the swidth

    for (int i = 0; i < height; i++){       //we put this as the first for loop bc we want these loops to run through the same amount of times as the height bc we want "height" amount of lines
        for (int x = 0; x < spaces; x++){     //this first for loop represents the amount of spaces needed fr each loop, it will not run the first time bc spaces are not needed and space = 0
          //std::cout << " ";
          result = result + " ";      //again since we are asked to return a string we can create a string that contains the results and then return a string


        }

        for (int y = 0; y < stars; y++){     //this represents the for loop for the amount of stars we'll need each time throughout the loop
          //std::cout << "*";
          result = result + "*";

        }

        spaces = spaces + 1;                //each time the loop runs, the amount of spaces increases by one from line to line
        stars = stars - 2;                  //each time the loop runs we will need to decrease the amont of stars by 2 because from line to line, the stars decrease by 2
        //std::cout << std::endl;             //this allows us to move to a new line
        result = result + "\n";             //adding \n to the string allows us to start a new line
      }

    return result;

}




//3*3 CHCKERBOARD

std::string fullcheckerboard(int width, int height){

  int space = 0; // keeps track of row spaces
  int star = 0; //keeps track of row stars
  bool z = true; //makes sure the columbs alternate
  int count = 0;  //keeps track of when to make the columbs alternate
  std::string result;
  for (int i = 0; i< height; i++){
    for (int j = 0; j < width; j++){
      if (z){
        if(star<3){
          result = result + "*";
          star++;
        }
        else{
          result = result + " ";
          space++;
          if(space==3){
            star = 0;
            space = 0;
          }
        }
      }
      else{
        if(space<3){
          result = result + " ";
          space++;
        }
        else{
          result = result + "*";
          star++;
          if(star==3){
            star=0;
            space=0;
          }
        }
      }
    }
    star=0;//resets everything
    space=0;
    result = result + "\n";
    count++;  //adds vertical count
    if (count==3){
      if(z){
        z = false;
      }
      else{
        z = true;
      }
      count = 0;
    }
  }
  return result;
}
