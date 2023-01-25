#include <iostream>

// namespace animals{
enum Animals {
  chicken,
  goat,
  dog, 
  cat, 
  elephant,
  duck, 
  snake,
  max_animals
};
// }
int main (int argc, char *argv[])
{
  // Solution 1.
  constexpr int days {365};
  double maxTemperature[days]{};
  
  // Solution 2.
  int leg[Animals::max_animals]{2,4,4,4,4,2,0};
  std::cout <<"Goat has "<< leg[Animals::goat] << " legs.";
  return 0;
}
