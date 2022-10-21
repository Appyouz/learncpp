#include <iostream>

int main (int argc, char *argv[])
{
  std::cout << 5 << std::endl;
  std::cout << "now for the float here it goes" << std::endl;
  float f {5.1};
  std::cout << f << std::endl;

  double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
  double avogadro { 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation
  std::cout << pi << std::endl;
  std::cout << avogadro << std::endl;

  return 0;
}
