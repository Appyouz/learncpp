#include <iostream>

int sumNum(int num){
if (num < 10) {
 return num;
}
  return sumNum(num / 10) + num % 10;
}
int main (int argc, char *argv[])
{
    std::cout << sumNum(93427);
  
  return 0;
}
