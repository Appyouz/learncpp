#include <iostream>

/* int pow(int base, int exponent) {
  int result {1};
  for(int i{0}; i < exponent; ++i){ // 0 < 2(true), 1 < 2(true), 2 < 2(false)
    result = result * base;   // result(1) = 1 * 10 = 10, ++i = 0 + 1 = 1
                             //  result (10) = 10 * 10 = 100, ++i = 1 + 1 = 2
  }
  return result;
} */
int pow(int base, int exponent) {
  int result {1};
  for(int i{0}; i < exponent; ++i){ // 0 < 5(t), 1 < 5(t), 2 <(t), 3 < 5(t), 4 < 5(t), 5 < 5(f)
    result = result * base;    // result = 1 * 2 = 2; i = 0 + 1 = 1;
                              //  result = 2 * 2 = 4; i = 1 + 1 = 2;
                              //  result = 4 * 2 = 8; i = 2 + 1 = 3;
                              //  result = 8 * 2 = 16; i = 3 + 1 = 4;
                              //  result = 16 * 2 = 32; i = 4 + 1 = 5;
  }
  return result; // 32
}



int main (int argc, char *argv[])
{
  std::cout<< pow(2,5) << std::endl;
  
  return 0;
}
