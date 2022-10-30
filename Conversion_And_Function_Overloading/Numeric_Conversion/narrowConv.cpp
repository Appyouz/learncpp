#include <iostream>
void someFcn(int i)
{
}

int main()
{
    double d{ 5.5 };

    std::cout<< static_cast<int>(d);
    std::cout << '\n'<<d;
    someFcn(d); // bad: will generate compiler warning about narrowing conversion
    someFcn(static_cast<int>(d)); // good: we're explicitly telling the compiler this narrowing conversion is expected, no warning generated

    return 0;
}
