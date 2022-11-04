#include <iostream>

int getUserInput()
{
  int i{};
  std::cin >> i;
  return i;
}

int main()
{
  std::cout << "How many bananas did you eat today? \n";

  if (int iBananasEaten{ getUserInput() }; iBananasEaten <= 2)
  {
    std::cout << "Yummy\n";
  }
  else
  {
    std::cout << iBananasEaten << " is a lot!\n";
  }

  return 0;
}
