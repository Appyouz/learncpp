//Write a program that prints out the letters a through z along with their ASCII codes
// 97 to 122
#include <iostream>


int main (int argc, char *argv[])
{
  char alphaLetters {97};

  while ( alphaLetters <= 122) {

    std::cout << alphaLetters <<": " << static_cast<int>(alphaLetters) << std::endl;
    ++alphaLetters;
  
  }

  return 0;
}
