#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include "profile.h"

using std::string;



  Profile::Profile(string usrn, string dspn){
    username = usrn;    //sets the username in private equal to the username entered when making the profile
    displayname = dspn; //same for the displayname
  }


  Profile::Profile(){   //creating profile
    username = "";      //sets username equal to the argument that the user enters (done by previous function)
    displayname = "";   //sae for dispayname
  }


  string Profile::getUsername(){
    return username;
  }


  string Profile::getFullName(){
    return displayname;
  }


  void Profile::setDisplayName(string dspn){ //change displayname
    displayname = dspn;          //not sure why this is nt working properly
  }
