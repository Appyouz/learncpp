#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
  char name[255]{};
  std::cout << "Enter your name: " ;
  std::cin.getline(name, std::size(name));
  std::cout << "You entered: " << name << '\n';
  return 0;
}
