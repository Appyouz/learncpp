#include <iostream>

int main(int argc, char *argv[]) {
  int outerCounter{1};

  while (outerCounter <= 5) {

    int innerCounter{5};
    while (innerCounter >= 1) {

      if (innerCounter <= outerCounter) {
        std::cout << innerCounter << " ";
      } else {
        std::cout << " " ;
      } 
      --innerCounter;
    }
    std::cout   << std::endl;
    ++outerCounter;
  }
  return 0;
}
