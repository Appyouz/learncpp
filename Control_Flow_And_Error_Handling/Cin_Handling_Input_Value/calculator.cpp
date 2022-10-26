#include <iostream>
#include <limits>

void ignoreLine() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void cinClear() {
  if(std::cin.fail()) {
    std::cin.clear();
    ignoreLine();
    std::cerr << "The input is invalid, please try again.\n";
  }
}

double getDouble() {
  while (true) {
  
  
  std::cout << "Enter the value: ";
  double x{};
  std::cin >> x;
  cinClear();
  ignoreLine();
  return x;
 }
}

char getOperator() {

  while (true) {
    std::cout << "Enter the operation: ";
    char operation{};
    std::cin >> operation;
    // cinClear();
    ignoreLine();

    switch (operation) {
    case '+':
    case '-':
    case '*':
    case '/':
      return operation;

    default:
      std::cout << "Wrong operation, try again" << std::endl;
    }
  }
}

double performCalculation(double x, char operation, double y) {
  if(operation == '+'){
    return x + y;
  } else if (operation == '-') {
    return x - y;
  } else if (operation == '*') {
    return x * y;
  }else {
    return x / y;
  }

}

int main(int argc, char *argv[]) {

  double x { getDouble()};
  char operation {getOperator()};
  double y { getDouble()};
  std::cout << "Result: " << performCalculation(x, operation, y) << std::endl;  
  return 0; 
}

