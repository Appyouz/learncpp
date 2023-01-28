#include <iostream>
#include <utility>
#include <iterator>
int main (int argc, char *argv[])
{
  int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
  int arrayLength {sizeof(array) / sizeof(array[0])};

  // THis is just for iteration so name it iteration, except the last one 
  // whiich will be sorted by the time we get to it 
  for (int iteration {0}; iteration < arrayLength - 1 ; ++iteration) {
    // THis is for searching through all elements except last one since it 
    // has no pairs due to  length - 1
    if (iteration > iteration + 1) {
      std::cout << "Termination at: " << iteration << std::endl;
      break;
    }
    for (int currentIndex { 0 }; currentIndex < arrayLength - 1; ++currentIndex ) {

      //If the current element is larger then just swap easy
      if (array[currentIndex] > array[currentIndex + 1]) {
      std::swap(array[currentIndex], array[currentIndex + 1]);
      }
    
    }
    

  }

for (int count {0}; count < arrayLength; ++count) {
   std::cout << array[count] << " ";
}
  return 0;
}
