#include <iostream>
#include <random>


int main (int argc, char *argv[])
{
  std::mt19937_64 mt;
  for (int count {1}; count <= 100; ++count) {

    std::cout << mt() << '\t';

    if (count % 10 == 0) {
      std::cout  << std::endl;
    
    }
  
  }
  return 0;
}
