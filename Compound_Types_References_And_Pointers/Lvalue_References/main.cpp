#include <iostream>

 int main (int argc, char *argv[])
 {
   int x {5};
  int& ref {x};
  std::cout << "x: " << x << "\nref: " << ref << '\n';
  int var{6};
  int& ref1{ var };  // an lvalue reference bound to var
  int& ref2{ ref1 }; // an lvalue reference bound to var
  std::cout << ref1 << '\n' << ref2 << '\n' << var;
  return 0;
 }
