#include <iostream>

// write your mult function template here

template<typename T, typename U>
T add(T x, U y) {
  return x + y;

}
int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3) << '\n';
	std::cout << add<double>(1.2, 3) << '\n';

	return 0;
}
