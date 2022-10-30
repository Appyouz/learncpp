#include <iostream>

using num = int;
using letter = char;
using val = int;
using pat = int;

int main (int argc, char *argv[])
{
  num num {5};
  val x {10};
  pat y {100};
  letter ch{'a'};
  std::cout << "num: " << num << std::endl;
  std::cout << "val: " << x << std::endl;
  std::cout << "pat: " << y << std::endl;
  std::cout << "ch: " << ch << std::endl;
  return 0;
}
