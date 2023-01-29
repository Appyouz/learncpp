// Optimized version of bubble sort inorder to check 
// if the last elements is sorted just terminate no
// need to keep checking the same thing entire time.

#include <iostream>
#include <utility>
#include <iterator>
int main (int argc, char *argv[])
{
  int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
constexpr  int arrayLength {sizeof(array) / sizeof(array[0])};

  // THis is just for iteration so name it iteration, except the last one 
  // whiich will be sorted by the time we get to it 
  for (int iteration {0}; iteration < arrayLength - 1 ; ++iteration) {


    // Since the at 'n'iteration the largest elements get bubble sort deduct it from
    // an array length
    int endOfArrayIndex { arrayLength - iteration};

      // Just to keep track of if swap is done or not
      bool swapped {false};
    // THis is for searching through all elements except last one since it 
    // has no pairs due to  length - 1
    if (iteration > iteration + 1) {
      std::cout << "Termination at: " << iteration << std::endl;
      break;
    }
    for (int currentIndex { 0 }; currentIndex < endOfArrayIndex - 1; ++currentIndex ) {

      //If the current element is larger then just swap easy
      if (array[currentIndex] > array[currentIndex + 1]) {
      std::swap(array[currentIndex], array[currentIndex + 1]);
        // swap is done
        swapped = true;
      }
    
    }
    if (!swapped) {
      std::cout << "Termination on iteration: " << iteration + 1 << std::endl;
      break;
    }
    

  }

for (int count {0}; count < arrayLength; ++count) {
   std::cout << array[count] << " ";
}
  return 0;
}
