#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Divisibility Base Cases"){
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(35,17) == false);
    CHECK(isPrime(1) == false);
}
TEST_CASE("Is Prime Base Cases"){
    CHECK(isPrime(2) == true);
    CHECK(isPrime(9) == false);
}
TEST_CASE("Next Prime Base Cases"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
}
TEST_CASE("Count Primes Base Cases"){
    CHECK(countPrimes(1,10) == 4);    
    CHECK(countPrimes(1,50) == 15);
}
TEST_CASE("Is Twin Prime Base Cases"){
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(9) == false);
    CHECK(isTwinPrime(37) == false);
}
TEST_CASE("Next Twin Prime Base Cases"){
    CHECK(nextTwinPrime(14) == 17);
    CHECK(nextTwinPrime(17) == 19);
    CHECK(nextTwinPrime(19) == 29);
}
TEST_CASE("Largest Twin Prime Base Cases"){
    CHECK(largestTwinPrime(1,10) == 7);
    CHECK(largestTwinPrime(23,25) == -1);
    CHECK(largestTwinPrime(31,37) == 31);
}