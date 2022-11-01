// This is just the demo to revise 
// 'pass by value/reference' method
// So finally it is clear "std::string being expensive to call"
// whenever we use use 'pass by value' the function parameter 
// receives a copy of the argument, thus leading copy of std::string 
// which expensive since it's a class based not object like 'int/double/char'
// while 'pass by reference' method doesn't copy the argument, rather
// is bound to the argument, which avoids making a copy of the argument
// (Note:- any changes made to reference is made to original argument too)
// excetional case if ref were const then no changes can be made.
//
//
#include <iostream>
#include <string>

void printByValue(std::string val) // The function parameter is a copy of str
{
    std::cout << val << '\n'; // print the value via the copy
}

void printByReference(const std::string& ref) // The function parameter is a reference that binds to str
{
    std::cout << ref << '\n'; // print the value via the reference
}

int main()
{
    std::string str{ "Hello, world!" };

    printByValue(str); // pass str by value, makes a copy of str
    printByReference(str); // pass str by reference, does not make a copy of str

    return 0;
}
