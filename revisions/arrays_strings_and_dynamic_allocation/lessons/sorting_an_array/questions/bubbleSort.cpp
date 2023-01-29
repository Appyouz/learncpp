// bubble sort using while do loop
#include <iostream>
#include <utility>

int main (int argc, char *argv[])
{
  int array[]{15,32,5,90,55,67};
  int arrayLength { sizeof(array) / sizeof(array[0])};
 int count { 1};
  while (count < arrayLength  ) {
    for (int i {0}; i < arrayLength - count; ++i ) {
      if (array[i] > array[i + 1]) {
       std::swap(array[i], array[i + 1]);
      }
    }
    count++;
  }

  for (int i {0}; i < arrayLength; ++i) {
    std::cout << array[i] << " ";
  }
  return 0;
}
