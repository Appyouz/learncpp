#include <iostream>
#include <limits>

int main (int argc, char *argv[])
{

  int number{};
do{
  std::cout << "Enter a number between 1 and 9: ";
  std::cin >> number;   

// if the user entered something invalid
if (std::cin.fail())
{
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
}
}while(number < 1 || number > 9 );
  
  constexpr int array [] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
  int arrayLength {sizeof(array) / sizeof(array[0])};

  std::cout << "The elements of an array are: " << std::endl;
  for (int i {0}; i < arrayLength; ++i) {
    std::cout << array[i] << " ";
  }

  for (int i {0}; i < arrayLength; ++i) {
    if(array[i] == number) {
      std::cout<< '\n' << "The number " << number << " has index " << i << '\n';
      break;
    }
  }
 
  // My solution
  std::cout << '\n' << "The value located at index " << number << " is: " << array[number] << '\n';

  return 0;
}
