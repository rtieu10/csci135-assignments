#include "funcs.h"
#include <iostream>


//int main(){

//std::cout << nextPrime(10) << std::endl; // returns 17??

//}
// Sample function

//std::string greet(std::string name){
  //return "Hello "+name+"!";
//}

// Write all your functions in here
/*int main(){
  return isDivisibleby(14,3);   //nothing returns here

}*/

bool isDivisibleby(int n, int d){
  return (n % d) == 0;
}
  //bool divisible;
  //if (n % d == 0){
    //divisible = true;
    //return 1;

  //}

  //else{
    //divisible = false;
    //return 0;
  //}
//}

bool isPrime(int n){
  //bool prime;
  for(int i = 2; i < n; i++){  //this loop will run through all the numbers that are in between 2 & n
    if(isDivisibleby(n,i)){    //if the integer enteres is divisible by i, then it is NOT prime
      //prime = true;
      return false;   //remember to return false first, if you return true before false, it will stop running
    }
    //else{
      //prime = false;
      //return true;    //if it is not divisble then it is true
    //}
  }
  return true;    //return true outside the function because if you put it in an else statement, it will execute else and not go through the for loop again
}


int nextPrime(int n){
  n++;  //you have to add this bc you need to increment the number ATLEAST once, because if n starts as prime, you're still looking for the next prime
  while (!isPrime(n)){    //whlile n is not prime (include the paramters)
    n++;              //increment 1 to n
    if (isPrime(n)){     //if n is prime
      n = n;          //n is set to that number
    }
  }
  return n;       // n is returned here

}

int countPrimes(int a, int b){   //reuse the functions that you wrote previously
  int count = 0;

  for(int i = a; i < b; i++){    //this for loop should run through all the numbers inbetween a & b
    if(isPrime(i)){    //if isPrime is true, refers back to the function isPrime , don't know if this is how you appropriate compare the ints to isPrime
      count = count + 1;   //increases the count of the primes if it is true
    }

    //else{
      //count = count;  //if it is not a prime the count remains the same
    //}
  }
  return count;
}



bool isTwinPrime(int n){
  if (n == 2 || !isPrime(n)){   // if n is not prime return false, or if it's 2 bc 2 doesn't fit the condition
    return false;
  }

  else{ //if the number is a twin prime
    return isPrime(n) && (isPrime(n-2) || isPrime(n+2));   //check if the number is prime, and if the number - 2 and the number +2 are prime
  }
}



int nextTwinPrime(int n){     //finds the next twin prime
  n++;                        // we incrememnt by 1 here, because we are looking for the next one, so it has to be incrememnted
  while(!isTwinPrime(n)){     //while the number is nt a twin prime
    n++;                      // incrememnt again and search for a twin prime
  }

  return n;                   //when the twin prime is found it will return the twin prime
}



int largestTwinPrime(int a, int b){       //fnding the largest twin prime in range
  for(int i = b; a < i; i--){             //start at the largest number and move to the lower limit, to obtain the biggest number, this will return the first twin prime it finds
    if(isTwinPrime(i)){                   //finds twin primes, it will return the first one it finds,when you return the LOOP STOPS! so as soon as it finds the first one, it will stop
      return i;                           //this will return the largest twin prime, since we start at the largest number
    }
  }

  if(nextTwinPrime(a) > b){                  //if the next twin prime after the lower limit is greater than the upper limit (twinprime is out of range) 
    return -1;                               //return -1
  }


}



//}
