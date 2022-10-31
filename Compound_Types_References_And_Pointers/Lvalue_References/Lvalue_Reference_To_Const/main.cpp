#include <iostream>

int main()
{

  int& a {90};
    int x { 5 };          // x is a modifiable lvalue
    const int& ref { x }; // okay: we can bind a const reference to a modifiable lvalue

    std::cout << ref << '\n'; // okay: we can access the object through our const reference
    // ref = 7;                 // error: we can not modify an object through a const reference

    x = 6;                // okay: x is a modifiable lvalue, we can still modify it through the original identifier
  
    std::cout << ref << '\n';
   int z {5};

  // Both r and p can change the value of z
  int& r {z};
  int& p{z};

  std::cout << "z: " << z << '\n';
  std::cout << "r: " << r << '\n';
  std:: cout << "p: " << p << '\n';
  p = 100;
  z = 105;
  r = 200;
  std::cout << "z = " << z << '\n';
  const int& y {10};
  std::cout << x  << '\n';
    return 0;
}
