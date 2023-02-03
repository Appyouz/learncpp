#include <iostream>

int factorial(int num){
  if (num <= 0) {
    return 1;
  }
  return factorial(num - 1) * num;
}
int main (int argc, char *argv[])
{
  
  for (int i {0}; i < 7; ++i) {
    std::cout <<factorial(i) << '\n';

  }
  return 0;
}

