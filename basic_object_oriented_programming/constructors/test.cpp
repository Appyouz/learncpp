#include <iostream>


class MyClass {
public:
  int m_x {};
  int m_y {};
  
};

int main (int argc, char *argv[])
{
  // List initialization can do if variables are public
  MyClass name {10, 5};

  // prints 10 and 5 respectively
  std::cout << name.m_x << " " << name.m_y;
  return 0;

}

