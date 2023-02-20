#include <compare>
#include <cmath>
#include <iostream>
#include <numeric>

class Fraction{
private:
  int m_numerator {};
  int m_denominator {};
public:
  Fraction(int numerator, int denominator)
    : m_numerator{numerator},m_denominator{denominator}{
    reduce();
  }

public:
  void print(){
    std::cout << m_numerator << "/" << m_denominator << '\n';
  }
  friend Fraction operator*(const Fraction& f1, const Fraction& f2);
  friend Fraction operator*(const Fraction& f1, int number);
  friend Fraction operator*(int number, const Fraction& f1);

  void reduce() {
    int gcd {bgcd(m_numerator , m_denominator)};
    if (gcd) {
      m_numerator /= gcd;
      m_denominator /= gcd;
    
    }
  }

int bgcd(int a, int b) {
    return (b == 0) ? std::abs(a) : bgcd(b, a % b);
}
};

Fraction operator*(const Fraction& f1, const Fraction& f2){
  return {f1.m_numerator * f2.m_numerator , f1.m_denominator * f2.m_denominator};
  
}

Fraction operator*(const Fraction& f1, int number){
  return { f1.m_numerator * number, f1.m_denominator};
  
}
Fraction operator*(int number, const Fraction& f1) {
  return {f1 * number};
}


int main (int argc, char *argv[])
{
  // a.
    /* Fraction f1{ 1, 4 };
    f1.print();

    Fraction f2{ 1, 2 };
    f2.print(); */
 // b.
  
  Fraction f1{2, 5};
    f1.print();

    Fraction f2{3, 8};
    f2.print();

    Fraction f3{ f1 * f2 };
    f3.print();

    Fraction f4{ f1 * 2 };
    f4.print();

    Fraction f5{ 2 * f2 };
    f5.print();

    Fraction f6{ Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4} };
    f6.print();
  return 0;
}
