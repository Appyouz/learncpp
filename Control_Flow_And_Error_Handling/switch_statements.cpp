#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
  std::cout << "Enter the choice: " << std::endl;
  std::string str;
  std::cin >> str;
  switch (str) {
    case "one":
     std::cout << "One" << std::endl;
      break;
    case "two":
     std::cout << "Two" << std::endl;
      break;
    case "three":
     std::cout << "Three" << std::endl;
      break;
    
    

  }
  return 0;
}
