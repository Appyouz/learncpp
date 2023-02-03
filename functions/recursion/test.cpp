#include <iostream>

void countDown(int count) // 5
{
    std::cout << "push " << count << '\n'; // 5

    if (count > 1) // termination condition // 5 > 1 (true)
        countDown(count-1);  // 4 3 2 1 
  // inside this after push it goes
  // bunch of countDown() to pop out i.e 1 2 3 4
  // and the below pop will print out the 5 from the beginning push
    std::cout << "pop " << count << '\n'; // 1
}

int main()
{
    countDown(5);
    return 0;
}
