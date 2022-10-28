#include <iostream>
#include <random> // for std::mt19937

int main()
{
	std::mt19937 mt; // Instantiate a 32-bit Mersenne Twister
  

  std::uniform_int_distribution<> dice{1,6};

	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << dice(mt) << '\t'; // generate a random number

		// If we've printed 5 numbers, start a new row
		if (count % 5 == 0)
			std::cout << '\n';
	}

	return 0;
}
