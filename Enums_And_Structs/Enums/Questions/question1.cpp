//Define an enumerated type named MonsterType to choose between the following monster races:
//orcs, goblins, trolls, ogres, and skeletons.
#include <iostream>


namespace monsterType
{
 
enum MonsterType {
  orc, 
  goblin, 
  troll, 
  ogre, 
  skeleton,
}; 
}


int main (int argc, char *argv[])
{
  // namespace::enumeration identifier {namespace::enumerator}
  monsterType::MonsterType monster {monsterType::troll}; 
  std::cout << monster << '\n';

  char ch {'A'};
  std::cout << "ch: " << static_cast<int>(ch); // Prints 65
  return 0;
}
