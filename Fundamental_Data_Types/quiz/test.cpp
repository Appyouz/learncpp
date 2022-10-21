#include <iostream>

double askHeight() {
  std::cout << "Enter the height: " << std::endl;
  double height;
  std::cin >> height;
  return height;
}

//gravity
//9.8
//distanceFallen = gravity - seconds^2/2
// df = g - (seconds * seconds) / 2.0

double distanceFallen(int x_seconds) {
  constexpr double gravity {9.8};
  const double distanceFallen = gravity  - (x_seconds * x_seconds) / 2;
  return distanceFallen;
}

void printHeightAndSeconds(int x_seconds, double height) {
  if(height > 0.0){
   std::cout << "At "<< x_seconds<<", ball is at height: "<<height << std::endl;
  }else {
  std::cout << "At "<< x_seconds<<", ball is on the ground" << std::endl;
  }
}

//hint
void calculateHeightAndSeconds(int x_seconds, double height) {

  const double remainingHeight {height - distanceFallen(x_seconds)};
  printHeightAndSeconds(x_seconds, remainingHeight);

}


int main (int argc, char *argv[])
{
  double height {askHeight()};

  calculateHeightAndSeconds(0, height);
  calculateHeightAndSeconds(1, height);
  calculateHeightAndSeconds(2, height);
  calculateHeightAndSeconds(3, height);
  calculateHeightAndSeconds(4, height);
  calculateHeightAndSeconds(5, height);
  return 0;
}
