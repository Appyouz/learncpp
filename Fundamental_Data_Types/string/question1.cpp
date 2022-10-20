/*Write a program that asks the user to enter their full name and their age. 
 * As output, tell the user the sum of their age and
 *the number of letters in their name (use the std::string::length() member function to get the length
 of the string). For simplicity, count any spaces in the name as a letter.*/

#include <iostream>
#include <string>


int main (int argc, char *argv[])
{
  std::cout << "What is your name? " << std::endl;
  std::string name;
  std::getline(std::cin>>std::ws,name);

  std::cout << "What is your age? " << std::endl;
  int age {};
  std::cin>>age;

  int letters {static_cast<int>(name.length())} ;
  int total = age + letters;
  std::cout << "The sum of "<<name<<"'s age and letters length is: "<<total<< std::endl;
  return 0;
}
