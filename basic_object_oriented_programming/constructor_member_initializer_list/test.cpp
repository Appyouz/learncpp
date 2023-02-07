// Initializing member variables that are classes
#include <iostream>
class A {
public:
  A(int x = 0){
    std::cout << "A: " << x << '\n';
  }
};

class B {
private: 
  A m_x {};
public: 
  B(int y): m_x{y - 1} {
    std::cout << "B: " << y << '\n';
  }
};
int main (int argc, char *argv[])
{
  A a {3}; // prints A: 3
  B b {6}; // prints A:5 B:6
  return 0;
}

