#include <iostream>

void print_interval(int L, int U){  //void bc it's not returning
  for (int i = L; i < U; i ++){
    std::cout << i << " ";  //quotations at the end allows the numbers to print in one line
  }

}

int change(int myarray[], int index, int value){
  for (int x = 0; x < 10; x++){  //loops through the
    myarray[index] = value;
  }
  for (int x = 0; x < 10; x++){
    std::cout << myarray[x] << " ";
  }
  for (int i = 0; i < 10; i++){
    myarray[i] = 1;
  }
}


void fib(){
int fib[60]; //initializing an array of 60 integers called fib
int first = 0;   //first term of the array
int second = 1;  //second term of the array
int sum = 0;
for (int i = 0; i < 60; i++){
  std::cout << first << " ";
  sum = first + second;
  first = second;
  second = sum;
}

}

int main(){
  print_interval(-5, 10);
  std::cout << " " << std::endl;
  print_interval(6,10);
  std::cout << " " << std::endl;
  print_interval(1,7);
  std::cout << " " << std::endl;
  int myData[10];
  int index2;
  int value2;
  for (int z = 0; z < 10; z++){
    myData[z] = 1;       //creates an array of ten with the name called "myarray"
  }
  for (int z = 0; z < 10; z++){
    std::cout << myData[z] << " ";
  }
    std::cout << " " << std::endl;
    change(myData, 3, 20);
    std::cout << " " << std::endl;
    change(myData, 5, 50);
    std::cout << " " << std::endl;
    change(myData, 9, 13);
    std::cout << " " << std::endl;
    fib();
    return 0;
  }
