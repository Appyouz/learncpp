#include <iostream>

int main (int argc, char *argv[])
{
  int studentsMarks[]{90, 70, 80, 97, 65};
  int numOfStudents {sizeof(studentsMarks) / sizeof(studentsMarks[0])};
  int totalScore = 0;
  int bestScore = 0;

  //Prefere prefix rather than postfix i.e. ++i
  for (int i = 0 ; i < numOfStudents ; ++i) {
    if (studentsMarks[i] > bestScore) {
       bestScore = studentsMarks[i];
    }
    // totalScore += studentsMarks[i];

  }
  std::cout << "best score = " << bestScore << std::endl;
  
  return 0;
}
