#include "funcs.h"
#include <iostream>
#include <vector>

using std::vector;
// Sample function

/*std::string greet(std::string name){
  return "Hello "+name+"!";
}*/

// Write all your functions in here

vector<int> makeVector(int n){
  vector<int> v;                //empty vector of ints, v
  for(int i = 0; i < n; i++){
    v.push_back(i);            //will add every element to vector v, up to the second greatest number
  }
  return v;
}


vector<int> goodVibes(vector<int> v){
  vector<int> posint;            //vector of positive integers
  for(int i = 0; i < v.size(); i++){      //runs through the vector
    if(v[i] >= 0){                       //if the element at i is > 0, it will add it to posint vect
      posint.push_back(v[i]);
    }
  }
  return posint;
}


void gogeta(vector<int> &goku, vector<int> &vegeta){
  /*vector<int> result;         //vector that will old the values from both vectors
  for(int i = 0; i < goku.size(); i++){   //loops through all elements adds them to new vector
    result.push_back(i);
  }*/
  for(int j = 0; j < vegeta.size(); j++){
    goku.push_back(vegeta[j]);   //adding every in the second vector to the first one
  }

  for(int i = 0; i < goku.size(); i++){
    std::cout << goku[i] << " ";
  }
  //return goku;
  vegeta.clear();   //clears the second vector of all its elements
}


vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
  vector<int> result;    //int vector called result
  while(v1.size() < v2.size()){    //while the size of vecto1 < vector2
    v1.push_back(0);               //add 0 to vector 1, until their sizes are equal
  }

  while(v2.size() < v1.size()){
    v2.push_back(0);
  }

  for(int i = 0; i < v2.size(); i++){  //will run through thr array for as many elements there are in v1 & v2
    result.push_back(v1[i]+v2[i]);     //this will add the values stored in both vecotrs at a specific index and add them to the vector result
  }
  return result;
}
