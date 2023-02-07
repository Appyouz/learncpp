#include <iostream>
int global {1};

int generatId() {
  static int num {0};
  global = 6;
  return ++num;
}

int main (int argc, char *argv[])
{
  global = 5;
  std::cout << "before generatId() global: " << global << '\n';
  std::cout << generatId() << '\n'; 
  std::cout << "after generatId() global: " << global << '\n';
  // std::cout << generatId() << '\n'; 
  // std::cout << generatId() << '\n'; 
  return 0;
}
