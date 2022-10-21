/*Write a function called calculate() that takes two integers and a char representing one of the following 
 *mathematical operations: +, -, *, /, or % (modulus).
 Use a switch statement to perform the appropriate mathematical operation on the integers,
 and return the result. If an invalid operator is passed into the function,
 the function should print an error. For the division operator, do an integer division.

Hint: “operator” is a keyword, variables can’t be named “operator”.*/

#include <iostream>

int askInput() {
  std::cout << "Enter the number: " << std::endl;
  int x{};
  std::cin >> x;
  return x;
}

void calculate() {
  int x = askInput();
  int y = askInput();

  std::cout << "Enter the operator: " << std::endl;
  char ch;
  std::cin >> ch;

 switch(ch) {

    case '+':
    std::cout << "x + y = "<< x + y << std::endl;
      break;
   case '-':
   std::cout << "x + y = "<< x - y << std::endl;
      break;
   case '*':
std::cout << "x + y = "<< x * y << std::endl;
      break;
   case '/':
std::cout << "x + y = "<< x / y << std::endl;
      break;
   default:

      break;
  }



}

int main (int argc, char *argv[])
{
  calculate();
  
  return 0;
}
