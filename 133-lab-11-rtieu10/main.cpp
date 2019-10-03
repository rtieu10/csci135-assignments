#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

using std::cout;
using std::endl;
using std::to_string;

int main()
{

  // sample code
  /*std::string result;

  result=greet("Tom");
  std::cout << result <<"\n";
  // Call the functions you wrote in funcs here

  return 0;*/

  Profile p1("marco","Marco");
    cout << p1.getUsername() << endl;
    cout << p1.getFullName() << endl;


  p1.setDisplayName("Marco Rossi");
    cout << p1.getUsername() << endl;
    cout << p1.getFullName() << endl;   //returns marco when it should return MArco Rossi



  Profile p2("tarmal", "Tarma Roving");
    cout << p2.getUsername() << endl;
    cout << p2.getFullName() << endl;



}
