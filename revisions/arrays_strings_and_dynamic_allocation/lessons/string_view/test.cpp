#include <iostream>

int main (int argc, char *argv[])
{
  std::string x{ "Hello" };
	std::string_view y{ x};


	std::cout << x << ' ' << y << '\n';

	x = "Hi";

	std::cout << x << ' ' << y;
  return 0;
}
