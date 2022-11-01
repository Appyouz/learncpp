#include <iostream>

// takes two integers by non-const reference, and returns the greater by reference
int& max(int& x, int& y)
{
    return (x > y) ? x : y;
}

int add(int x, int y) {
  return (x < y) ? x : y;
}

int dmax (int x , int y) {
  return (x > y) ? x : y;
}

int main()
{
    int a{ 5 };
    int b{ 6 };
    

    // dmax(a,b) = 0; // cannot do this 
    // add(5,5) = 10; // cannot do this 
  // Only possible with reference function and reference argument
    max(a, b) = 7; // sets the greater of a or b to 7

    std::cout << a << b << '\n';

    return 0;
}
