#include <iostream>

int main()
{
    char myChar{ 'a' };
  std::cout << myChar << std::endl;
    while (myChar <= 'z')
    {
        std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
        ++myChar;
    }

    return 0;
}
