#include "constants.h"
#include <iostream>

double askHeight() {
  std::cout << "Enter the height: " << std::endl;
  int x{};
  std::cin >> x;
  return x;
}

double calculateHeight(double initialHeight, double seconds) {

  double distanceFallen{myConstants::gravity * seconds * seconds / 2};
  double heightNow{initialHeight - distanceFallen};

  if (heightNow <= 0.0) {
    return 0.0;

  } else {
    return heightNow;
  }
}

void printHeightAndTime(double time, double initialHeight) {

  for (int count{0}; count <= initialHeight; ++count) {

    double result = calculateHeight(initialHeight, time);
    std::cout << "At " << time << ", the height of the ball is: " << result
              << std::endl;
    ++time;
    if (result == 0.0) {
      break;
    }
  }
}

int main(int argc, char *argv[]) {
  double x{askHeight()};
  int seconds {0};
  printHeightAndTime(seconds, x);
  return 0;
}
