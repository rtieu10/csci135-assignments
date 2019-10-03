#pragma once

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include <string>

// sample signature
//std::string greet(std::string name);

// provided stuff
//#define MAX_H 512
//#define MAX_W 512


const int MAX_W = 512;
const int MAX_H = 512;

using std::string;

void readImage(std::string filename, int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(std::string filename,int image[MAX_H][MAX_W], int height, int width);

// Write your function signatures / prototypes here

void invertImage(int image[MAX_H][MAX_W], int height, int width);
void halfInverted(int image[MAX_H][MAX_W], int height, int width);
void whiteBox(int image[MAX_H][MAX_W], int height, int width);
void frame(int image[MAX_H][MAX_W],int height, int width);
void scale(int image[MAX_H][MAX_W], int height, int width);
void pixelate(int image[MAX_H][MAX_W], int height, int width);
