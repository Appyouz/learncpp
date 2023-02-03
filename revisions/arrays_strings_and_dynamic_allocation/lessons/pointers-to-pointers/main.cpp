#include <iostream>

int main (int argc, char *argv[])
{
  int value {5};
  int* ptr {&value};
  std::cout << ptr << '\n';
  int** ptrptr { &ptr};
  // Gives differenet addres value
  std::cout << ptrptr;
  return 0;
}

