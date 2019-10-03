#pragma once

#include <iostream>


// sample signature
//std::string greet(std::string name);


// Write your function signatures / prototypes here
void test_ascii(std::string line);
char shiftLeft(char c, int lshift);
char shiftRight(char c, int rightShift);

std::string decryptCaesar(std::string text, int rshift);
std::string decryptVigenere(std::string text, std::string key);
std::string encryptCaesar(std::string text, int rightShift);
std::string encryptVigenere(std::string plaintext, std::string keyword);
