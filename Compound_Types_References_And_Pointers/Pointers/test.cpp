#include "iostream"



// Learn from this test i.e 
//  while referncing we can use put ampersand(&)
//  either after 'data-type(eg: int here)' or before 'identifier'
//  how ever if no value(aka referent is assigned it will act assigned
//  'address-of-operator and points to the address, i think')
//  It seems in both cases for reference/address-of-operator
//  we cannot use '&' after the identifier name and
//  before the 'data-type' either 
//
  


int main (int argc, char *argv[])
{
  int x {5};
  int &ref {x}; // this works as reference too
  // int& x {x};  // this throws redefinition error for x
  std::cout << "x: " << x << '\n' << "ref: " << ref << std::endl;
  std::cout << "x's address: " << &x << std::endl;
  return 0;
}
