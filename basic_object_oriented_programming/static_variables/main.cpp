#include <iostream>

class Something {
private:
  static inline int s_idGenerator{1};
  int m_id{};
public:
  Something(): m_id {s_idGenerator++} {}

  int getID() const {return m_id;}
};
int main (int argc, char *argv[])
{
  Something first; 
  Something second; 
  Something third; 
  std::cout << first.getID() << '\n'; // prints 1
  std::cout << second.getID() << '\n';  // prints 2
  std::cout << third.getID() << '\n';  // prints 3
  return 0;
}
