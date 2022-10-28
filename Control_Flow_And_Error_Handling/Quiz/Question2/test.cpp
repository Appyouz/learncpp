#include <cmath>
#include <iostream>


int main (int argc, char *argv[])
{
  std::cout << "Enter the number: " << std::endl;
  int x {};
  std::cin >> x;

  for (int count{2}; count <= x/2; ++count) {

    if(x % count == 0){
      std::cout << x << " is not Prime" << std::endl;
    }else {
      std::cout << x << " is prime" << std::endl;
    }
  
  }
  return 0;
}
