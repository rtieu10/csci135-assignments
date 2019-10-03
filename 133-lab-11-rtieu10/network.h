#pragma once
#include "profile.h"

using std::string;

struct Post{
  string username;
  string message;
};

class Network{
private:
  static const int MAX_USERS = 20;
  static const int MAX_POSTS = 100;
  int numUsers;
  int numPosts;
  Post posts[MAX_POSTS];
  Profile profiles[MAX_USERS];
  bool following[MAX_USERS][MAX_USERS];
  int findID(string usrn);
public:
  Network();
  bool addUser(string usrn,string dspn);
  bool follow(string usrn1, string usrn2);
  void printDot();
  bool writePost(string usrn, string msg);

};
