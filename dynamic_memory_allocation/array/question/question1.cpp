/* 
 * Write a program that:

    Asks the user how many names they wish to enter.
    Dynamically allocates a std::string array.
    Asks the user to enter each name.
    Calls std::sort to sort the names (See 11.4 -- Sorting an array using selection sort and 11.9 -- Pointer arithmetic and array indexing)
    Prints the sorted list of names.

std::string supports comparing strings via the comparison operators < and >. You don’t need to implement string comparison by hand.
 * */

#include <iostream>
#include <string>
#include <algorithm> // for std::sort
#include <iterator> // for std::size

std::string getInput(int x) {
  std::string usr;
  for(int i = 0; i < x; i++) {
  std::cout <<"Enter name #" << x << ": " << "\n";
  std::getline(std::cin,usr);
}
  return usr;
}
int main() {
  int length {};
  std::cout <<"Enter the number of names: ";
  std::cin >> length;

  std::string str {getInput(length)};
  auto* array{new std::string[length] {str}};
  std::sort(array, array + length);
  std::cout << "\n " << "Here are your names:- " << "\n";
  for (int i = 0 ; i < length; i++) {
     std::cout<<str[i] << "\n";
  }
  return 0;
}
