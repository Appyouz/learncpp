/*      1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1 */
#include <iostream>

int main()
{
	// There are 5 rows, we can loop from 1 to 5
	int outer{ 1 }; // 1 2

	while (outer <= 5) // 1 2
	{
		// Row elements appear in descending order, so start from 5 and loop through to 1
		int inner{ 5 };  // 5 4

		while (inner >= 1) // 5 4 3 2 1 0f, 
                      // 4
		{
			// The first number in any row is the same as the row number
			// So number should be printed only if it is <= the row number, space otherwise

			if (inner <= outer) // 5f, 4f, 3f, 2f, 1t
                         // 4f 
            // print the number and a single space
				std::cout << inner << ' '; // x x x x 1
			else
          // don't print a number, but print two spaces
				std::cout << "  "; // + + + +

			--inner; // 4 3 2 1 0
		}

		// A row has been printed, move to the next row
		std::cout << '\n';

		++outer; // 2
	}

	return 0;
}
