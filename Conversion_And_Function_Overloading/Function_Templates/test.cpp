#include <iostream>

// a declaration for our function template (we don't need the definition any more)
template <typename T>
T max(T x, T y);

template<>
int max<int>(int x, int y) // the generated function max<int>(int, int)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max<int>(7, 2) << '\n'; // instantiates and calls function max<int>(int, int)

    return 0;
}
