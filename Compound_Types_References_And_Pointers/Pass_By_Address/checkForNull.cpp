// Good for simple program but not for complex stuff
#include <iostream>

void print(int* ptr)
{
    if (ptr) // if ptr is not a null pointer
    {
        std::cout << *ptr;
    } 
  // If null the program the program exits without an error
}

int main()
{
	int x{ 5 };

	print(&x);
	print(nullptr); // Here after printing 5 from above the program exits

	return 0;
}
