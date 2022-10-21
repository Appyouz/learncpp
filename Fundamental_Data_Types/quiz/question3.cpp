/*Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
 * The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
 * The program computes the answer on the two numbers the user entered and prints the results. 
 * If the user enters an invalid symbol, the program should print nothing.*/

#include <iostream>
#include <string>



int main (int argc, char *argv[])
{

  std::cout << "Enter first number: "<< std::endl;
  double x {};
  std::cin>> x;

  std::cout << "Enter second number: " << std::endl;
  double y {};
  std::cin >> y;
  std::string op;

  std::cout << "Enter the operation" << std::endl;
  std::getline(std::cin>>std::ws,op);
 
  if(op == "+") {
    std::cout << "result: "<< x + y << std::endl;
  }else if(op == "-") {
    std::cout << "result: "<< x - y << std::endl;
  } else if(op == "*") {
    std::cout << "result: "<< x * y << std::endl;
  } else if (op == "/") {
    std::cout << "result: "<< x / y << std::endl;
  } else {
    std::cout << "Wrong operator" << std::endl; 
  }

  
  return 0;
}
