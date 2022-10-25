/* Write a function named sumTo() that takes an integer parameter named value,
 * and returns the sum of all the numbers from 1 to value.
For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

Hint: Use a non-loop variable to accumulate the sum as you iterate from 1 to the input value,
much like the pow() example above uses the total variable to accumulate the return value each iteration. */


#include <iostream>

int sumTo(int value) {
  int result {0};
  for (int i {1}; i <= value; ++i) {
  
    result = result + i; // result = 0 + 1 = 1; i = 2
                        //  result = 1 + 2 = 3; i = 3
                        //  result = 3 + 3 = 6; i = 4
                        //  result = 6 + 4 = 10; i = 5
                        //  result = 10 + 5 = 15; i = 5
                        //  i = 5; loop exits 
  }                            
  return result;
}

int main (int argc, char *argv[])
{
  std::cout << sumTo(5) << std::endl;
  return 0;
}
