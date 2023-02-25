#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Divisibility Base Cases"){
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(35,17) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(9) == false);
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(countPrimes(1,10) == 4);    
    CHECK(countPrimes(1,50) == 15);
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(9) == false);
    CHECK(isTwinPrime(37) == false);
    CHECK(nextTwinPrime(14) == 17);
    CHECK(nextTwinPrime(17) == 19);
    CHECK(nextTwinPrime(19) == 29);
    CHECK(largestTwinPrime(1,10) == 7);
    CHECK(largestTwinPrime(23,25) == -1);
    CHECK(largestTwinPrime(31,37) == 31);
}