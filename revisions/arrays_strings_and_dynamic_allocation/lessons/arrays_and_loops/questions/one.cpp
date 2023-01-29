#include <iostream>

int main (int argc, char *argv[])
{
  constexpr int array [] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
  int arrayLength {sizeof(array) / sizeof(array[0])};

  std::cout << "The elements of an array are: " << std::endl;
  for (int i {0}; i < arrayLength; ++i) {
    std::cout << array[i] << std::endl;
  }
  return 0;
}
