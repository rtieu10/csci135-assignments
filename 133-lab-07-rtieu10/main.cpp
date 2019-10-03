#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
#include <cctype>
/*{

  // sample code
  std::string result;

  result=greet("Tom");
  std::cout << result <<"\n";
  // Call the functions you wrote in funcs here

  return 0;
}*/




int main(){
  std::string input;  //this creates a string variable called input
  int tabs = 0;  //this holds the amount of "tabs" needed aka the amount of open brackets minus the closed brackets
  while(getline(std::cin, input)){  //while there are lines in the inputted file, this loop will run
    for(int i = 0; i < tabs; i++){   //will add the amount of tabs (open bracket - closed bracket) to each line
      std::cout << "\t";  //adds the tab to the beginning of lines for "tabs" amount of times (the amount of open brackets=closed brackets), we will change tabs each time
    }    //before we run through the for loop again

    std::cout << removeLeadingSpaces(input) << std::endl; //this will print the input without the spaces, tbas is already printed, so we can print this and then increment or descrease tabs as needed after
    tabs = tabs + countChar(input, '{');   //each time there is { seen in the input string for each line, it will be added to the tabs variable
    tabs = tabs - countChar(input,'}');    // each time there is a } seen in the input line, it will be subtracted from the tabs varibale
      //all these things are in the while loop, so that while there are lines in the file, it will keep changing the tabs varibale and add them for each line
  }
    return 0;
}
