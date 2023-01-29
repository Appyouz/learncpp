#include <iostream>

int main (int argc, char *argv[])
{

  // declaring cstring inherited from c programming
  // std::string is actually implemented from c-style-string
  char string[]{"string"};
  int stringLength {sizeof(string) / sizeof(string[0])};
  for (int i {0}; i < stringLength; ++i) {
   
  std::cout << static_cast<int>(string[i]) << " ";
  }
  return 0;
}
