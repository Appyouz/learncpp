#include <string>
#include <vector>
#include <algorithm>
#include<string_view>
#include <iostream>

struct StudentGrade
{
  std::string s_name {};
    char s_grade {};
  
};

class GradeMap
{
  private:
    std::vector<StudentGrade> m_map {};
  public:

      
    char& operator[](std::string_view name){

    auto found {std::find_if(m_map.begin(), m_map.end(), [&](const auto& student) {
     return (student.name == name);
    })};
      if( found != m_map.end()) {
        return found -> grade;
      }
      m_map.push_back(std::string{name});
      return m_map.back().grade;
    }

};
int main (int argc, char *argv[])
{
  
  return 0;
}
