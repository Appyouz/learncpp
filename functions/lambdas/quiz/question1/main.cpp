#include <iostream>
#include <array>
#include <algorithm>
#include <string>
struct Student {
  std::string s_name {};
  int s_points {};
};


int main (int argc, char *argv[])
{
  std::array<Student, 8> arr{
  { { "Albert", 3 },
    { "Ben", 5 },
    { "Christine", 2 },
    { "Dan", 8 }, // Dan has the most points (8).
    { "Enchilada", 4 },
    { "Francis", 1 },
    { "Greg", 3 },
    { "Hagrid", 5 } }
};

  auto isTrue { [] (const auto& x, const auto& y) {
    return (x.s_points < y.s_points);

  }};
 const auto best {std::max_element(arr.begin(), arr.end(), isTrue)};
  std::cout << best->s_name << " is the best student." << '\n';
  return 0;
}
