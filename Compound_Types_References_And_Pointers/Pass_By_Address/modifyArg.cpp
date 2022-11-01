// Pass by address can modify the argument's value
// Only if pointer is a non-const



#include <iostream>

void changeValue(int* ptr) // note: ptr is a pointer to non-const in this example
{
    *ptr = 6; // change the value to 6
}

int main()
{
    int x{ 5 };

    std::cout << "x = " << x << '\n'; // 5

    changeValue(&x); // we're passing the address of x to the function

    std::cout << "x = " << x << '\n'; // 6

    return 0;
}
