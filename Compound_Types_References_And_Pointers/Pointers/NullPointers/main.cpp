#include <iostream>
// Use nullptr when you need a null pointer literal for initialization 
// assignment or passing a null pointer to a function

int someFunction(int *ptr) {
 


  // cannot return 'ptr' only since it points to addr of a data type
  return *ptr;
}
int main()
{
    int* ptr { nullptr }; // can use nullptr to initialize a pointer to be a null pointer

    int value { 5 };
    int* ptr2 { &value }; // ptr2 is a valid pointer
    ptr2 = nullptr; // Can assign nullptr to make the pointer a null pointer

    someFunction(nullptr); // we can also pass nullptr to a function that has a pointer parameter

    return 0;
}
