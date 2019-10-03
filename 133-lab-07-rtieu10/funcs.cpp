#include "funcs.h"
#include <iostream>
#include <cctype>


// Sample function

//std::string greet(std::string name){
  //return "Hello "+name+"!";
//}

// Write all your functions in here

std::string removeLeadingSpaces(std::string line){
  std::string result;                  //this string holds the result without the spaces
  //char character;
  for (int i = 0; i < line.length(); i++){   //this for loop runs through all the characters in the string called line,
  //  char c = line[i];
    if(!isspace(line[i])){        //if the character in the line is not a space, then take the result and add everything from i to the end of the end of the string
      return result + line.substr(i,line.length());    // add the result and everything including and after i (including the spaces), to the string result and return it,
    }                                                  //this works because as soon as we see the first letter, we can grab everything after it, and just return it
  }
}



int countChar(std::string line, char c){
  int charcount = 0;                      // the character count stars off as 0

  for (int i = 0; i < line.length(); i++){  //this for loop loops through all the characters in the line,
    if (line[i] == c){                      //if the characteer at index i, equals character c,
      charcount += 1;                       //if it is equal then add one to the character count,
    }
  }
  return charcount;
}
