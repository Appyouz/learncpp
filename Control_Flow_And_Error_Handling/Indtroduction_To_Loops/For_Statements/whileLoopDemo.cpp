// print from 1 to 10 using while loop
// just to demonstrate how it works in for loop


#include <iostream>

int main (int argc, char *argv[])
{
  int count {0};
  do {
    std::cout<< count << ' ';
    ++count;
  
  }while (count <= 10);
  return 0;
}
