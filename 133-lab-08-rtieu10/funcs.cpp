#include "funcs.h"
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <fstream>

// Sample function

/*std::string greet(std::string name){
  return "Hello "+name+"!";
}*/


// Provided functions

using namespace std;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(std::string filename, int image[MAX_H][MAX_W], int &height, int &width) {
  char c;
  int x;
  ifstream instr;
  instr.open("test_image.pgm");

  // read the header P2
  instr >> c;
  assert(c == 'P');
  instr >> c;
  assert(c == '2');

  // skip the comments (if any)
  while ((instr>>ws).peek() == '#') {
    instr.ignore(4096, '\n');
  }

  instr >> width;
  instr >> height;

  assert(width <= MAX_W);
  assert(height <= MAX_H);
  int max;
  instr >> max;
  assert(max == 255);

  for (int row = 0; row < height; row++)
    for (int col = 0; col < width; col++)
      instr >> image[row][col];
  instr.close();
  return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(std::string filename,int image[MAX_H][MAX_W], int height, int width){
  ofstream ostr;
  ostr.open(filename.c_str());
  if (ostr.fail()) {
    cout << "Unable to write file\n";
    exit(1);
  };

  // print the header
  ostr << "P2" << endl;
  // width, height
  ostr << width << ' ';
  ostr << height << endl;
  ostr << 255 << endl;


  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      assert(image[row][col] < 256);
      assert(image[row][col] >= 0);
      ostr << image[row][col] << ' ';
      ostr << endl;
    }
  }
  ostr.close();
  return;
}


// Write all your functions in here

void invertImage(int image[MAX_H][MAX_W], int height, int width){
  for (int row = 0; row < height; row++){   //loops through the height & width in the 2d array
    for(int col = 0; col < width; col++){
        image[row][col] = 255-image[row][col];   //the array will be redefined by subtracting it from 255 the orginal array
      }
  }
  writeImage("invert.pgm", image, height, width);  //will call the write function, and creates a new file with the inverted image
}


void halfInverted(int image[MAX_H][MAX_W], int height, int width){
  for(int row = 0; row < height; row ++){
    for(int col = width/2; col < width; col++){  //starts at the width/2 to get to the second half
      image[row][col] = 255 - image[row][col];   //reassigns the elements in the array and inverts them!
    }
  }
  writeImage("halfinvert.pgm", image, height, width);

}


void whiteBox(int image[MAX_H][MAX_W], int height, int width){
  for(int row = height/4 - 1; row < (height - height/4); row++){  //start at height/4 so we can stop a fourth down the photo & stop at height-heihgt/4 so we can stop 1/4 from the bottm
    for(int col = width/4 - 1; col < (width - width/4); col++){   //same for width/4 so we can center it and start it 1/4 in and 1/4 from the end of the photo
      image[row][col] = 255;   //set it to 255 to set all pixels to white
    }
  }
  writeImage("whitebox.pgm", image, height, width);

}


void frame(int image[MAX_H][MAX_W],int height, int width){
  for(int row = height/4 -1; row < (height - height/4); row++){  //loops through all the rows,
    for(int col = width/4 - 1; col < (width - width/4); col++){   //loops through all the colums
      if(row == (height/4 -1) || row == (height - height/4 - 1)){   //if it is the first row or last row, it will make all the pixels white
        image[row][col] = 255;
      }
      else{
        image[row][width/4 -1] = 255;    //if it is not the first or last row, it will make the whole first column of the frame white
        image[row][width- width/4 - 1] = 255; //makes the whole last column white
      }
    }
  }
  writeImage("frame.pgm", image, height, width);
}


void scale(int image[MAX_H][MAX_W], int height, int width){
const int newheight = 2 * height;
const int newwidth = 2 * width;
int newarray[MAX_H][MAX_W];
int originalrow = 0;
int originalcol = 0;

for(int row = 0; row < newheight; row+= 2){
  for(int col = 0; col < newwidth; col+= 2){
    newarray[row][col] = image[originalrow][originalcol];
    newarray[row][col+1] = image[originalrow][originalcol];
    newarray[row+1][col] = image[originalrow][originalcol];
    newarray[row+1][col+1] = image[originalrow][originalcol];

    originalcol++;

  }
  originalrow++;
  originalcol = 0;
  }

  writeImage("scale.pgm", newarray, newheight, newwidth);
}


void pixelate(int image[MAX_H][MAX_W], int height, int width){
  int average = 0;
  int newarray[MAX_H][MAX_W];
  for(int row = 0; row < height; row++){
    for(int col = 0; col < width; col++){
      average = image[row][col] + image[row][col+1];
      average = average + image[row+1][col] + image [row+1][col+1];
      average = average/4;
      newarray[row][col] = average;
      newarray[row][col+1] = average;
      newarray[row+1][col] = average;
      newarray[row+1][col+1] = average;
    }
  }
  writeImage("pixelate.pgm", newarray, height, width);
}
