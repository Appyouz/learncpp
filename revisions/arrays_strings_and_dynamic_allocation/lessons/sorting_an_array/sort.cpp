#include <algorithm> // for std::sort
#include <iostream>
#include <iterator> // for std::size

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
 int arrayLength {static_cast<int>(std::size(array))};
  
	std::sort(std::begin(array), std::end(array));

	for (int i{ arrayLength }; i < arrayLength ; ++i)
		std::cout << array[i] << ' ';

	std::cout << '\n';

	return 0;
}
