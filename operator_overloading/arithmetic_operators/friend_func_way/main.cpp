#include <iostream>

class Cents {
private:
  int m_cents {};
public:
  Cents(int cents):m_cents(cents){} 
  int print() const{
    return m_cents;
  }
  friend Cents operator+(const Cents& cent1, const Cents& cent2){
  return cent1.m_cents + cent2.m_cents; 
  }

  friend Cents operator*(const Cents& c1, const Cents& c2);
};

Cents operator*(const Cents& c1, const Cents& c2) {
  return c1.m_cents * c2.m_cents;
}

int main (int argc, char *argv[])
{
  
  Cents cent1{5};
  Cents cent2{5};
  Cents centSum {cent1 + cent2};
  std::cout << "add " << centSum.print() << '\n';

  Cents centMul {cent1 * cent1};
  std::cout << "mul "<< centMul.print() << '\n';
  return 0;
}
