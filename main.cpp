#include <iostream>
#include "funcs.h"

int main(){

  std::cout << "Is 100 divisible by 25: \n";
  if(isDivisibleBy(100,25) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }
  std::cout << "Is 35 divisible by 17: \n";
  if(isDivisibleBy(35,17) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 1 a prime: \n";
  if(isPrime(1) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 2 a prime: \n";
  if(isPrime(2) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 9 a prime: \n";
  if(isPrime(9) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

std::cout << "The next prime from 14 is: \n";
std::cout << nextPrime(14) << "\n";

std::cout << "The next prime from 17 is: \n";
std::cout << nextPrime(17) << "\n";

std::cout << "The number of primes in range (1,9) is: \n";
std::cout << countPrimes(1,9) << "\n";

std::cout << "The number of primes in range (31,50) is: \n";
std::cout << countPrimes(31,50) << "\n";

std::cout << "Is 3 a twin prime: \n";
if(isTwinPrime(3) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}

std::cout << "Is 9 a twin prime: \n";
if(isTwinPrime(9) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}

std::cout << "Is 37 a twin prime: \n";
if(isTwinPrime(37) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}

std::cout << "The next twin prime from 14 is: \n";
std::cout << nextTwinPrime(14) << "\n";

std::cout << "The next twin prime from 17 is: \n";
std::cout << nextTwinPrime(17) << "\n";

std::cout << "The next twin prime from 19 is: \n";
std::cout << nextTwinPrime(19) << "\n";

std::cout << "The largest twin prime in range (1,10) is: \n";
std::cout << largestTwinPrime(1,10) << "\n";

std::cout << "The largest twin prime in range (23,25) is: \n";
std::cout << largestTwinPrime(23,25) << "\n";

std::cout << "The largest twin prime in range (31,37) is: \n";
std::cout << largestTwinPrime(31,37) << "\n";

  return 0;
}
