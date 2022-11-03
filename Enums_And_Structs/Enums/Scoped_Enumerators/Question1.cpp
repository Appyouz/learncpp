
/* Define an enum class named Animal that contains the following animals:
 * pig, chicken, goat, cat, dog, duck.
 * Write a function named getAnimalName() that takes an Animal parameter 
 * and uses a switch statement to return the name for that animal as a 
 * std::string_view (or std::string if you’re using C++14). 
 * Write another function named printNumberOfLegs() that uses a switch statement to
 * print the number of legs each animal walks on. 
 * Make sure both functions have a default case that prints an error message.
 * Call printNumberOfLegs() from main() with a cat and a chicken. Your output should look like this: */
#include <iostream>
#include <string>



enum class Animal {
  pig, 
  chicken, 
  goat, 
  cat, 
  dog, duck,
};
const std::string getAnimalName(Animal animal) {
  using enum Animal;
  switch (animal) {
    case pig: return "pig";
    case chicken: return "chicken";
    case goat: return "goat";
    case cat: return "cat";
    case dog: return "dog";
    case duck: return "duck";
    default: return "???";
  
  }
}
const std::string printNumberOfLegs(Animal animal) {
  using enum Animal;
  switch (animal) {
   /*  case pig: return "Four";
    case chicken: return "Two";
    case goat: return "Four";
    case cat: return "Four";
    case dog: return "Four";
    case duck: return "Two"; 
    default: return "???"; */
    case pig:
    std::cout << "A " << getAnimalName(pig) << "has Four legs"
  }
}

int main (int argc, char *argv[])
{
  // Animal cat {cat};
  // Animal chicken {chicken};
  std::cout << printNumberOfLegs(Animal::cat) << '\n';
  std::cout << printNumberOfLegs(Animal::chicken);
  
  return 0;
}
