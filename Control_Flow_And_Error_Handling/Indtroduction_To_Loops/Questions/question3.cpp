/* 5 4 3 2 1
4 3 2 1
3 2 1
2 1
1 */


#include <iostream>

int main (int argc, char *argv[])
{
  int outerCount {5};
  
  std::cout<<outerCount--<<"testing"<<std::endl; //5 
  std::cout<<outerCount<<"testing"<<std::endl;   // 4
  
  while (outerCount >= 1)  // 5 4 3 2 1
  {

      int innerCount{outerCount}; // 5 4 3 2 1
      while (innerCount >= 1) {
        std::cout << innerCount-- << ' '; // 5 4 3 2 1
        // innercount = {4 3 2 1 0}
      
      }
    // std::cout << outerCount << " ";
      std::cout<< std::endl;
      --outerCount;  // 4 3 2 1 0
    
  }
  return 0;
}
