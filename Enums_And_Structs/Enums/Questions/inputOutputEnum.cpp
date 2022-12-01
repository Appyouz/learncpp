#include <iostream>
enum Animal
{
    cat = -3,
    dog,         // assigned -2
    pig,         // assigned -1
    horse = 5,
    giraffe = 5, // shares same value as horse
    chicken,      // assigned 6
    hen, 
    rabbit = 20,
    hamster,
};


int main (int argc, char *argv[])
{
  std::cout << Animal::cat << '\n'; // -3 
  std::cout << Animal::dog << '\n';  // -2
  std::cout << Animal::pig << '\n';  // -1
  std::cout << Animal::horse << '\n'; // 5
  std::cout << Animal::giraffe << '\n'; // 5
  std::cout << Animal::chicken << '\n'; // 6
  std::cout << Animal::hen << '\n'; // 7
  std::cout << Animal::rabbit << '\n'; // 20
  std::cout << Animal:: hamster << '\n'; // 20

  return 0;
}
