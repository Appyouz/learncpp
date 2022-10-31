// address of a operator returns a pointer

#include <iostream>

int main (int argc, char *argv[])
{
  int x {5};

  std::cout << typeid(&x).name() << std::endl;
  return 0;
}
