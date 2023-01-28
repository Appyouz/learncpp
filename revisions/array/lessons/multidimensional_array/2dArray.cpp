#include <iostream>

int main (int argc, char *argv[])
{
   int rows {3};
   int cols {5};
 
  int array [rows][cols]
  {
    {1, 2, 3, 4, 5},  // row 0
    {6, 7, 8, 9, 10}, // row 1
    {11, 12, 13, 14, 15} // row 2
  };

 
  for (int i {0}; i < rows; ++i) {
   
    for (int j {0}; j < cols; ++j) {
      std::cout << array[i][j] << '\t';
    }
    std::cout << '\n';
  }


  // for product arrays
  
  std::cout << '\n';
  int products [5][5];

  for (int i {1}; i <=5; ++i) {
   for (int j {1}; j < 5; ++j) {
      products [i][j] = i * j;
   
   }
  }

  for (int i {1}; i < 5; ++i) {
   for (int j {1}; j < 5; ++j) {
   std::cout << products[i][j] << '\t';
  } 
    std::cout << '\n';
  }
  return 0;
}
