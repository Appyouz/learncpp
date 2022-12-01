/* In designing a game, we decide we want to have monsters,
because everyone likes fighting monsters.
Declare a struct that represents your monster.
The monster should have a type that can be one of the following:
an ogre, a dragon, an orc, a giant spider, or a slime. Use an enum class for
this.

Each individual monster should also have a name
(use a std::string or std::string_view),
as well as an amount of health that represents how much damage they can take
before they die.
Write a function named printMonster() that prints out all of the struct’s
members. Instantiate an ogre and a slime, initialize them using an initializer
list, and pass them to printMonster(). */

#include <iostream>
#include <string>
#include <string_view>

enum class MonsterType {
  ogre,
  dragon,
  orc,
  giantSpider,
  slime,
};

struct Monster {
  MonsterType type{};
  std::string name{};
  int health{};
};

const std::string getMonsterName(MonsterType type) {
  using enum MonsterType;
  switch (type) {
  case ogre:
    return "ogre";
  case dragon:
    return "dragon";
  case orc:
    return "orc";
  case giantSpider:
    return "giant spider";
  case slime:
    return "slime";
  default:
    return "Noting left";
  }
}

void printMonster(Monster monster) {
  std::cout << "This " << getMonsterName(monster.type) << " is named "
            << monster.name << " and has " << monster.health << " health.";
}

int main(int argc, char *argv[]) {

  Monster ogre{MonsterType::ogre, "Tobeyu", 145};
  printMonster(ogre);
  std::cout << '\n';
  // printMonster(slime);
  return 0;
}
