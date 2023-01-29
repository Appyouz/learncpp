// To use strcpy_s()
#define __STDC_WANT_LIB_EXT1__ 1
#include <iostream>
#include <cstring>
int main (int argc, char *argv[])
{
  
  char string []{"copy this"};
  char dest[5]{};
  strcpy(dest, string);
  // not supported by my compiler, bummer.
  // strcpy_s(dest,5,string);
  std::cout << dest << '\n';
  
  return 0;
}
