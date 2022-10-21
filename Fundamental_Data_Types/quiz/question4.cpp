/*Write a short program to simulate a ball being dropped off of a tower. 
 To start, the user should be asked for the height of the tower in meters. 
 Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity
 (the ball is not moving to start). 
 Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
 The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using the following formula: 
distance fallen = gravity_constant * x_seconds2 / 2

*/

#include <iostream>





double  distanceFallen(int x_seconds) {
  constexpr double gravity_constant {9.8};
  double distanceFallen {gravity_constant * (x_seconds * x_seconds)/2.0};
  return distanceFallen;

}


void printTotalHeightAndSeconds(int x_seconds, double height) {
  if(height > 0.0) {
    std::cout << "At "<<x_seconds<<" seconds, the ball is at height: "<<height << std::endl;
  } else {

    std::cout << "At "<<x_seconds<<" seconds, the ball reach the ground "<< std::endl;
  }
}


double askHeight() {
  std::cout << "Enter the height: " << std::endl;
  double height {};
  std::cin >> height;
  return height;
}

void totalHeightAndSeconds(double height, int x_seconds) {
  const double totalHeight {height - distanceFallen(x_seconds)};
  printTotalHeightAndSeconds(x_seconds,totalHeight);

}

int main (int argc, char *argv[])
{
  double height = askHeight();
  totalHeightAndSeconds(height, 0);
  totalHeightAndSeconds(height, 1);
  totalHeightAndSeconds(height, 2);
  totalHeightAndSeconds(height, 3);
  totalHeightAndSeconds(height, 4);
  totalHeightAndSeconds(height, 5);
  return 0;
}
