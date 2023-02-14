// Operator overloading of different types
#include <iostream>



class Cents {
private: 
  int m_cents {};
  public:
  Cents(int cent): m_cents{cent}{}

  /* friend Cents operator+(const Cents& c1, int num) {
    return c1.m_cents + num;

  } */
  /* friend Cents operator+(int num, const Cents& c1) {
    return c1.m_cents + num;
  } */
  friend Cents operator+(const Cents& c1, const Cents& c2) {
    return c1.m_cents + c2.m_cents;
  }
  
  int getCents() {
    return m_cents;
  }
};
int main (int argc, char *argv[])
{
  Cents c1{5};
  Cents c2{5};
  int num {10};
  Cents centSum{c1 + c2};
  std::cout << "cent + cent : "<< centSum.getCents() << '\n';
  Cents centSumDif {c1 + num};
  std::cout << "Cent + int : "<< centSumDif.getCents() << '\n';

  Cents centSumDifAgain {num + c1};
  std::cout << "int + cent : "<< centSumDifAgain.getCents() << '\n';
  
  return 0;
}
