#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include "network.h"
#include <string>
using std::string;


  int Network::findID(string usrn){
    for(int i = 0; i < numUsers; i++){  //20 for the const int at MAX_USERS which = 20
      if(profiles[i].getUsername() == usrn){   //if value at that index = username, then return the index,
        return i;
      }
    }
    return -1;
  }


  Network::Network(){
    numUsers = 0;  //when you create a network set numUsers to 0
    numPosts = 0;
    for(int x = 0; x < MAX_USERS; x++){   //this is 2d array of users on the network, in order to loop through it , 2 for loops
      for(int i = 0; i < MAX_USERS; i++){
        following[x][i] = false;    //every element in the 2d arrya is set to false first
      }
    }
  }


  bool Network::addUser(string usrn,string dspn){
    if(numUsers + 1 > 20 || usrn == ""){
      return false;
    }

    for(int i = 0; i < usrn.length(); i++){   //checks if all the characters in username are al/num
      if(!isalnum(usrn[i])){
        return false;
      }
    }

    for(int j = 0; j < numUsers; j++){
      if(profiles[j].getUsername() == usrn){
        return false;
      }
    }

    Profile temp = Profile(usrn,dspn);
    profiles[numUsers] = temp;
    numUsers++;
    return true;
  }

  bool Network::follow(string usrn1, string usrn2){
    bool check1 = false;  //bool variable, if it is in the array then true
    bool check2 = false;
    int index1;    //stores the index of user1 / user2
    int index2;
    for(int i = 0; i < numUsers; i++){  //loops through the amount of users that are registered
      if(profiles[i].getUsername() == usrn1){
        check1 = true;
        index1 = i;
      }
    }
    for(int j = 0; j < numUsers; j++){
      if(profiles[j].getUsername() == usrn2){
        check2 = true;
        index2 = j;
      }
    }
    if(check1 && check2){
      following[index1][index2] = true;   //this will make user 1, follow user 2
      return true;   //if they do follow each other return true,
    }
    return false;
  }


  void Network::printDot(){
    for(int x = 0; x < numUsers; x++){
      std::cout << "@" << profiles[x].getUsername() << std::endl;
    }
    for(int i = 0; i < numUsers; i ++){
      for(int j = 0; j < numUsers; j++){
        if(following[i][j] == true){
          std::cout << "@" << profiles[i].getUsername() << "->" << profiles[j].getUsername() << std::endl;
        }
      }
    }
  }

  bool Network::writePost(string usrn, string msg){
    if(numPosts == 100){
      return false;
    }
    for(int i = 0; i < numUsers; i++){
      if(profiles[i].getUsername() == usrn){
        posts[numPosts] = {usrn,msg};   // sets the post at the thing sotred at the index of numPosts to the usrn, and msg stored in the struct
        return true;
      }
    }
    return false;
  }
