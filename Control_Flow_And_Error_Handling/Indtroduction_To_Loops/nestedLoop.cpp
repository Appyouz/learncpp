#include <iostream>

int main (int argc, char *argv[])
{
  int outer{1};

  while (outer <= 5) {

    // inner variable is declared inside so that everytime we enter 
    // the outer loop the inner value is reset to zero
    // if it didnt reset then the condition for inner loop wont be 
    // satisfied because the increment in outer is after the inner loop
    int inner{1};
    while (inner <= outer) {
      std::cout << inner << ' ' ;
      ++inner;
    
    }
   std::cout << '\n';
    ++outer;

  
  }
  return 0;
}
