#include <iostream>

// without reference(&) parameters we cannot modify the value
void swap(int& a, int& b) {
 int temp {0};
  temp = a;
  a = b;
  b = temp;
}
int main (int argc, char *argv[])
{
  int a;
  int b;
  std::cout << "Enter number a: ";
  std::cin >> a;
  std::cout << "Enter number b: ";
  std::cin >> b;
  
  swap(a, b);
  std::cout << "a= " << a <<" b= " << b << '\n';
  return 0;
}
