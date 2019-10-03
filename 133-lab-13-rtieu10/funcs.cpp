#include "funcs.h"
#include <iostream>
#include <string>


// Sample function

/*std::string greet(std::string name){
  return "Hello "+name+"!";
}*/

// Write all your functions in here
using std::string;

void printRange(int left, int right){
  if(left > right){     //if the left integer is greater than the right one
    return;              //break out of the loop
  }
  else{
    std::cout << left << " ";     //this will print left every time
    printRange(left + 1, right);  //this will incrememnt left, and will stop will left = right, because if it is greater, it'll just return and break out of the loop
  }
}

int sumRange(int left, int right){
  if(left > right){
    int x = 0;
    return x;
  }
  else{
    int y = 0;
    y = left + sumRange(left + 1, right);
    return y;
  }
}


int sumArrayInRange(int *arr, int left, int right){
  if(left<right){
    return sumArrayInRange(arr, left+1, right) + arr[left];
  }
  return 0;
}


//returns the sum of an array
int sumArray(int *arr, int size){
  return sumArrayInRange(arr, 0, size);
}


bool isAlphanumeric(string s){
  if(s == ""){
    return true;
  }
  if(s.length() == 1){
    return isalnum(s[0]);
  }
  if(!isalnum(s[0])){
    return false;
  }
  return isAlphanumeric(s.substr(1));
}


bool nestedParens(std::string s){
  if(s.length()==0){
    return true;
  }

  if(s[0]!='('||s[s.length()-1]!=')'){
    return false;
  }

  return nestedParens(s.substr(1,s.length()-2));
}
