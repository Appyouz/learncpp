#include <iostream>
#include <iterator>

// ...
int* findValue(int *array, int *end, int length) {
  int* z {};
  if (array && end) {
    // std::cout << array + 0 << '\n';
    z = array + 0;

  }else {
    // std::cout << array + length;
    z = array + length;
  }
  return z;

}
int main()
{
    int arr[]{ 2, 5, 4, 10, 8, 20, 16, 40 };

    // Search for the first element with value 20.
    int* found{ findValue(std::begin(arr), std::end(arr), 20) };

    // If an element with value 20 was found, print it.
    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }

    return 0;
}
