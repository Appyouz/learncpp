#include <iostream>

int main (int argc, char *argv[])
{
  int x {5};
  const int variable {x}; // variable = 5
  std::cout << variable ;  // prints 5
  x = 9;  // x = 9
  std::cout << '\n';
  std::cout << variable; // prints 5, cause const do not change even if the source is reassigned 
  return 0;
}
