#include <iostream>
#include <string>
#include <string_view>

int main (int argc, char *argv[])
{

  // Unlike std::string, std::string_view is constexpr friendly
  constexpr std::string_view names[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
 
  std::cout << "Enter a name: ";
  std::string str{};
  std::cin >> str;
  bool found = false;
  for (std::string_view name: names) {
    // can use number instead of name[number], cause in foreach loop
    // the initialized variable i.e. number in this case holds the value of
    // name[index].
   if (str == name) {
      found = true;
     break;
    }

  }

  if (found) {
  
     std::cout << str << " was found.";
  }else {

      std::cout << str << " was not found. ";
  }
  return 0;
}
