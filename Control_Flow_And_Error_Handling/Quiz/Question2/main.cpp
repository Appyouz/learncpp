#include <iostream>
#include <cassert>
#include <cmath> // for std::sqrt

bool isPrime(int x)
{
    if (x <= 1)
        return false;

    int maxTest{ static_cast<int>(std::sqrt(x)) }; // Compute the maximum number to test

    for (int test{ 2 }; test <= maxTest; ++test)
    {
        if (x % test == 0) // if x is evenly divisible
            return false; // then this number isn't prime
    }

    return true; // if we didn't find any divisors, then x must be prime
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
