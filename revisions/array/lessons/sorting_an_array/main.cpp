#include <iostream>
#include <utility>
#include <algorithm>
int main (int argc, char *argv[])
{
  constexpr int array[]{90,20,30,10,50};
  int arrayLength {sizeof(array) / sizeof(array[0])};

  for (int startIndex {0}; startIndex < arrayLength; ++startIndex) {
    int smallestIndex {startIndex};

    for (int currentIndex{startIndex + 1}; currentIndex < arrayLength; ++currentIndex) {
       if (array[currentIndex] < array[smallestIndex]) {
         smallestIndex = currentIndex;
       }
    }
    //for some reason it is not working for me
		// std::swap(array[startIndex], array[smallestIndex]);
  }

  std::cout << "The arranged elements are: " ;
  for (int count {0}; count < arrayLength; ++count) {
    std::cout << array[count] << " ";
  
  }
  return 0;
}
