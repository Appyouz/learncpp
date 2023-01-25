#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
 int studentMarks[]{90,79,83,72,96};
  int numOfStudents {sizeof(studentMarks)/sizeof(studentMarks[0])};

  
  //Should print 4 * 5 = 20
  // or since it's all int so, 4+4+4+4+4 = 20
  std::cout << 
      "size of studentMarks = " << sizeof(studentMarks) << std::endl;

    // Should print 4
  std::cout <<
    "size of first student at index zero = " << sizeof(studentMarks[0]) << std::endl;
  std::cout << "total number of students = "<< numOfStudents <<std::endl;

  //for double 
  double doubleNum[] {1.0,2.0,3.0,4.0,5.0,6.0};
  float floatNum[] {1.1,1.2,1.3,1.4,1.5};
  // Should print 8 * 6 = 24
  std::cout << 
    "doubleNum = " << sizeof(doubleNum) << std::endl;

  // Shoudl print 4 * 5 = 20
  std::cout <<
    "floatNUm = " << sizeof(floatNum) << std::endl;

  //for char or string
  char charValue[]{'h','e','l','l','o'};

    // Should print 1 * 5 = 10
  std::cout <<
    "charValue = " << sizeof(charValue) << std::endl;

    //for string
  std::string str[]{"hello"};

  //Should print idk how = 32
  std::cout << 
    "str = " << sizeof(str) << std::endl;
  return 0;
}
