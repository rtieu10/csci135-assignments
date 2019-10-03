
#include <iostream>
#include "funcs.h"
#include <cctype>   //include this to use isalpha


// Sample function

//std::string greet(std::string name){
  //return "Hello "+name+"!";
//}

// Write all your functions in here


void test_ascii(std::string line){   //this is a void function because we will be printing not returning

  for(int i = 0; i < line.length(); i++){      //this will loop through all the characters in the string line
    std::cout << line[i] << " " << (int)line[i] << std::endl;      //this will print out the element in the string and a space and then the ascii code for the corresponding element /letter
  }
}


char shiftChar(char c, int rshift){
  char shiftedchar;     //will store the shifted character
       //adding the shift will shift the letter rshift amount of times

    if(!isalpha(c)){    //if the character is not a letter
      return c;         //return the character, this is because all puncuation marks remain unchanged
    }

    shiftedchar = c + rshift;     //this will move the chaacter c rshift amount of spaces,

    if(!isalpha(shiftedchar)){
      shiftedchar = shiftedchar - 26;

    }

    if(c < 91 && shiftedchar > 90){
      shiftedchar = shiftedchar - 26;
    }

    return shiftedchar;
  }


  char shiftLeft(char c, int lshift){
    if (!isalpha(c)){
      return c;
    }
    char result = c - lshift;
    if(!isalpha(result)){
      result += 26;
    }
    if(c>96&&result<97){
      result += 26;
    }
    return result;
  }


  //function fo encryption shift
  char shiftRight(char c, int rightShift){
    if(!isalpha(c)){
      return c;
    }
    char result = c + rightShift;
    if(!isalpha(result)){
      result-=26;
    }
    if(c<91&&result>90){
      result-=26;
    }
    return result;
  }

  //function to decrypt caesar
  std::string decryptCaesar(std::string text, int rshift){
    std::string result = "";
    for (int i = 0; i < text.length(); i++){
      result += shiftLeft(text[i], rshift);
    }
    return result;
  }

  //function to dycrypt Vigenre
  std::string decryptVigenere(std::string text, std::string key){
    int index = 0;
    std::string result = "";
    for (int i = 0; i < text.length(); i++){
      while(!isalpha(text[i]) && i < text.length()){
        result += text[i];
        i++;
      }
      if(i<text.length()){
        result+=shiftLeft(text[i],((int)key[index])-97);
        index++;
        if(index == key.length()){
          index = 0;
        }
      }
    }
    return result;
  }

  //function to encrypt caesar
  std::string encryptCaesar(std::string text, int rightShift){
    std::string result = "";
    for (int i = 0; i < text.length(); i++){
      result += shiftRight(text[i], rightShift);
    }
    return result;
  }

  //runs the encryption function
  std::string encryptVigenere(std::string text, std::string key_word){
    int index = 0;
    std::string result = "";
    for (int i = 0; i < text.length(); i++){
        while (!isalpha(text[i])&& i<text.length()){   //just adds the non alphabet and moves to next char
          result += text[i];
          i++;
        }
        if(i<text.length()){
          result+=shiftRight(text[i],((int)key_word[index])-97);
          index++;
          if(index == key_word.length()){
            index = 0;
          }
        }
    }
    return result;
  }



    /*if ((int)c >=65 && (int)c <= 90){
      shiftedchar = c + rshift;
    }

    else if ((int)c >= 91){   //if the ascii is 91 or greater (past Z)
      int(c) = 65;            //set the ascii code to 65 (A)
      shiftedchar = c + rshift;  //will add the shift to the character
      //rshift--; //decreases the shift by 1, so the loop eventually stops


    }



  return shiftedchar;
}*/
