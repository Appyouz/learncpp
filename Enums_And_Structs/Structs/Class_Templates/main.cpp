#include <iostream>

template<typename T, typename U>

struct Pair {
  T first {};
  U second {};
};

template<typename T, typename U>
void print(Pair<T, U> pair) {
  std::cout << pair.first << " " << pair.second;
}


int main (int argc, char *argv[])
{
  Pair<int, int> pair {5,5};
  print(pair);
  return 0;
}
