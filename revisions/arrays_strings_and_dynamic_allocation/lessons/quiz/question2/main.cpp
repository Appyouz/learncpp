#include<iostream>
#include <string_view>
#include<vector>

  

struct Student {
  std::string firstName{};
  int grade{};
};

int askInput() {
  std::cout << "How many students do you want to enter?(0-100): ";
  int number {};
  std::cin >> number;
  return number;
}
int main (int argc, char *argv[])
{
  Student student;
  int studentsNum {askInput()};
  std::vector students {student};
  // int vectorLength {sizeof(name) / sizeof(name[0])};
  int vectorLength {studentsNum};

  for (int i {0}; i < vectorLength; ++i) {
    // std::cout << "Enter name and grade: " ;
    // std::cin >> students[i].firstName >> students[i].grade; 
    std::cout << "Enter a name:";
    std::cin >> students[i].firstName;
    std::cout << "Enter a grade: ";
    std::cin >> students[i].grade;
  
  }

  for (int i {0}; i < vectorLength; ++i) {
    std::cout << students[i].firstName<< " got a grade of " << students[i].grade << '\n';
  
  }
  return 0;
}
