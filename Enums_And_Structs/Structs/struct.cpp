#include <iostream>

struct Employee
{
    int id {};
    int age {};
    double wage {};
};

int main()
{
    Employee joe;
    joe.id = 14;
    joe.age = 32;
    joe.wage = 60000.0;

    Employee frank;
    frank.id = 15;
    frank.age = 28;
    frank.wage = 45000.0;

    int totalAge { joe.age + frank.age }; // 32 + 28 = 50

    if (joe.wage > frank.wage) // true
        std::cout << "Joe makes more than Frank\n"; 
    else if (joe.wage < frank.wage)
        std::cout << "Joe makes less than Frank\n";
    else
        std::cout << "Joe and Frank make the same amount\n";

    // Frank got a promotion
    frank.wage += 5000.0;  // 50000.0
    std::cout << frank.wage << '\n';
    // Today is Joe's birthday
    ++joe.age; // 33 // use pre-increment to increment Joe's age by 1
    std::cout << joe.age << '\n';
    return 0;
}
