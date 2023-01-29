#include <iostream>

int main (int argc, char *argv[])
{
  int array[5]{5,5,5,5,5};
  int* ptr {array};
  std::cout << "size of *ptr: " << sizeof(ptr);
  return 0;
}
