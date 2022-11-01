#include <iostream>

void add(int x) {
  if (!x) {
    std::cout << x << std::endl;
    std::cout << "x! called"<< std::endl;
    return;
  } 
  std::cout << x << std::endl;
  std::cout << "x! not  called" << std::endl;
}
int main (int argc, char *argv[])
{
  // std::cout << "x: 0, print below: " << std::endl;
  add(0);
  // std::cout << "x: 1, print below: " << std::endl;
  // add(1);
  
  return 0;
}
