#include <iostream>
#include <string>

class Test {
private: 
  int m_x{};
  int m_y{};

  public:

  //default parameters value shall be on the right side
  //left side is illegal
  Test ( int x = 0, int y = 0) {
    m_x = x;
    m_y = y;
  
  }
  Test (int x , int y, int z) {

  }

  Test (int x = 1, double z = 1.1);
  Test (double x, double y, int z) {}
  Test(std::string str, char std, std::string_view);
};
int main (int argc, char *argv[])
{
  Test test(1,2); // Test(int x = 0, int y = 0);
  Test best {1,2,3}; // Test(int x, int y , int z);
   Test nest {1.1,1.2,1};
  Test pest {"hello", 'c', "world"};
  return 0;
}
