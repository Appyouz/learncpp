#include <cassert> // for assert()
#include <cmath> // for std::sqrt
#include <iostream>

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
  assert(gravity > 0.0); // The object won't reach the ground unless there is positive gravity.

  if (initialHeight <= 0.0)
  {
    // The object is already on the ground. Or buried.
    return 0.0;
  }

  return std::sqrt((2.0 * initialHeight) / gravity);
}

double getInput() {
  std::cout << "Enter the value: " ;
  int x{};
  std::cin >> x;
  return x;
}

int main()
{
  double x{getInput()};
  double y {getInput()};
  std::cout << "Took " << calculateTimeUntilObjectHitsGround(x, y) << " second(s)\n";

  return 0;
}
