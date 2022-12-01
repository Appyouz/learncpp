/* Create a struct to hold a fraction. 
 * The struct should have an integer numerator and an integer denominator member.

Write a function to read in a Fraction from the user, 
and use it to read-in two fraction objects. 
Write another function to multiply two Fractions together 
and return the result as a Fraction (you don’t need to reduce the fraction).
Write another function that prints a fraction. */
#include <iostream>
struct Fraction {
  int numerator {};
  int denominator {};
};

Fraction userInput() {
  Fraction fraction;
  std::cout << "Enter numerator: " ;
  std::cin >> fraction.numerator;
  std::cout << "Enter denominator: ";
  std::cin >> fraction.denominator;
  return fraction;
}


void printResult( const Fraction& fraction, const Fraction& fractionSecond) {
  int numerator {fraction.numerator * fractionSecond.numerator};
  int denominator {fraction.denominator * fractionSecond.denominator};
  std::cout << "Fractions multiplied together: "<< numerator << "/" << denominator;
}

Fraction rintResult(const Fraction& fractionOne, const Fraction& fractionTwo) {
  
}
int main (int argc, char *argv[])
{
  Fraction fractionOne {userInput()};
  Fraction fractionTwo {userInput()};
  std::cout << '\n';
  printResult(fractionOne, fractionTwo);
  std::cout << '\n';
  return 0;
}
