#include <iostream>

int plusOne()
{
    static int s_state { 3 }; // only initialized the first time this function is called

  std::cout << "s_state: " << s_state << std::endl;
    // Generate the next number

    ++s_state;      // first we modify the state
    return s_state; // then we use the new state to generate the next number in the sequence
}

int test(int x) {
  return x;
}

int main()
{
    std::cout << plusOne() << '\n';
    std::cout << plusOne() << '\n';
    std::cout << plusOne() << '\n';

  std::cout << test(plusOne());

    return 0;
}
