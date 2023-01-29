#include <iostream>

int main (int argc, char *argv[])
{
  int array[]{5,10,17,20,90,1};

  std::cout << "These two values should be same: " << '\n';
  std::cout << &array << '\n';
  std::cout << &array[0] << '\n';

  std::cout << "address of 1th element: " << '\n';
  std::cout << array + 1 << '\n';
  std::cout << &array[1] << '\n';

  std::cout << "value of 5th element: " << '\n';
  std::cout << *(array + 5) << '\n';
  std::cout << array[5];
  return 0;
}
