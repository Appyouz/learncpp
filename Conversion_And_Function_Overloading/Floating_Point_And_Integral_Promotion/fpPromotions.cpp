#include <iostream>

void printDouble(double d)
{
    std::cout << d << '\n';
}

int main()
{
    printDouble(5.0); // no conversion necessary
    printDouble(4.0f); // numeric promotion of float to double
  std::cout << std::sizeof(printDouble(5.0)) << std::endl;

    return 0;
}
