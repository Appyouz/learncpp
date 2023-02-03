#include <iostream>

void printNum(int num) {

  if (num == 0) {
   return ;
  }

 printNum(num / 2) ;
  std::cout << num % 2;
}

int main (int argc, char *argv[])
{
  int num {};
  std::cout << "Enter a positive number: ";
  std::cin >> num;
  printNum(num);
  return 0;
}
