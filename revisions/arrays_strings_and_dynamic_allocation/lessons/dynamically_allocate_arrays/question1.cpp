#include <iostream>
#include <string>
#include <algorithm>
int main (int argc, char *argv[])
{
  std::cout << "How many names would you like to enter?: ";
  int length {};
  std::cin >> length;

std:std::string* name {new std::string[length]{}};

  for (int count {0}; count < length; ++count) {
    std::cout << "Enter name #" << count + 1 << ": " ; 
    std::cin >> name[count];
  
  }
  std::sort(name, name + length);

  std::cout << "Names are: " << '\n';
  for (int count {0}; count < length; ++count) {
    std::cout << "Name #" << count + 1 << ": " << name[count]<< '\n';
  }

  delete[] name;
  name = nullptr; // optional since name goes out of scope after this immediately but yeah
  return 0;
}
