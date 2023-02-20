#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>

class Car
{
private:
  std::string m_make;
  std::string m_model;

public:
  Car(std::string_view make, std::string_view model)
      : m_make{ make }, m_model{ model }
  {
  }

  friend bool operator==(const Car& c1, const Car& c2);
  friend std::ostream& operator<<(std::ostream& out, const Car& c)
  {
    out << '(' << c.m_make << ", " << c.m_model << ')';
    return out;
  }

  // h/t to reader Olivier for this version of the function
  friend bool operator<(const Car& c1, const Car& c2)
  {
    if (c1.m_make == c2.m_make) // If the car is the same make...
      return c1.m_model < c2.m_model; // then compare the model
    else
      return c1.m_make < c2.m_make; // otherwise compare the makes
  }
};

bool operator==(const Car& c1, const Car& c2)
{
  return (c1.m_make == c2.m_make &&
          c1.m_model == c2.m_model);
}

int main()
{
  std::vector<Car> cars{
    { "Toyota", "Corolla" },
    { "Honda", "Accord" },
    { "Toyota", "Camry" },
    { "Honda", "Civic" }
  };

  std::sort(cars.begin(), cars.end()); // requires an overloaded Car::operator<

  for (const auto& car : cars)
    std::cout << car << '\n'; // requires an overloaded Car::operator<<

  return 0;
}
