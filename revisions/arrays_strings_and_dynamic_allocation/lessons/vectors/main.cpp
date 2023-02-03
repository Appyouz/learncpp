#include <iostream>
#include <vector>
int main (int argc, char *argv[])
{
  std::vector vector {1,2,3,4,5};
  std::cout << vector[7];
  std::cout << vector.at(5);
  return 0;
}
