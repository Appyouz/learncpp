#include <iostream>
enum Animals {
  chicken,
  goat,
  dog, 
  cat, 
  elephant,
  duck, 
  snake
};
int main (int argc, char *argv[])
{
  constexpr int days {365};
  double maxTemperature[days]{};

  std::cout << maxTemperature[0]<< std::endl;
  std::cout << maxTemperature[300] << std::endl;
  return 0;
}
