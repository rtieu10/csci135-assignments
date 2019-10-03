#pragma once

using std::string;

class Profile{
private:
  string username;
  string displayname;
public:
  Profile(string usrn, string dspn);
  Profile();
  string getUsername();
  string getFullName();
  void setDisplayName(string dspn);
};
