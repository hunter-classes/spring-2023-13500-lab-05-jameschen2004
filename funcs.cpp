#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int dividend, int divisor){
    return(dividend % divisor == 0);
}

bool isPrime(int num){
    if(num < 2){
        return false;
    }
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int num){
    num = num + 1;
    while(isPrime(num) == false){
        num = num + 1;
    }
    return num;
}

int countPrimes(int num_1, int num_2){
    int countPrimes = 0;
    for(int i = num_1; i<=num_2; i++){
        if(isPrime(i) == true){
            countPrimes = countPrimes + 1;
        }
    }
    return countPrimes;
}

bool isTwinPrime(int num){
    return(isPrime(num) && (isPrime(num+2) || isPrime(num-2)));
}

int nextTwinPrime(int num){
    num = num + 1;
    while(isTwinPrime(num) == false){
        num = num + 1;
    }
    return num;    
}

int largestTwinPrime(int min_range, int max_range){
    int temp_num = 0;
    for(int i = min_range; i<=max_range; i++){
        if(isTwinPrime(i) == true){
            temp_num = i;
        }
    }
    if(temp_num == 0){
        temp_num = -1;
    }
    return temp_num;
}