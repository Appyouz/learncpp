#include <iostream>



int main (int argc, char *argv[])
{
  int x { 5};
  int y { 10};
  int* ptr { &x};

  std::cout << "ptr: " << ptr << '\n' << "*ptr: " << *ptr << std::endl;



  ptr = &y ;
  *ptr = 100;
  *ptr = x;
  std::cout << "After change, the values are: " << std::endl;
  std::cout << "ptr: " << ptr << '\n' << "*ptr: " << *ptr << std::endl;
  std::cout << "x: " << x << '\n' << "y: " << y << std::endl;
  return 0;
}
