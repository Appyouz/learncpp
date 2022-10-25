// Iterate through every number between 1 and 50
#include "iostream"


int main (int argc, char *argv[])
{
  int count {49};

  while (count >= 1 && count <= 50) {
    std::cout << count << std::endl;  //49
    --count; // 48
  
  }
  std::cout << "cout: "<<count << std::endl;
  return 0;
}
