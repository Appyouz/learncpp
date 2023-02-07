#include <iostream>

class Calc
{
private:
    int m_value{};

public:
    // instead of using void which will return void as
    // this (void) << m_value
    // we can use lvalue referece to class type i.e. Calc&
    // and return this secret pointer *this
    // (Note:- this is a pointer pointing to address so if 
    // we want value, need to reference it using *this)
    Calc& add(int value) { m_value += value; return *this; }
    Calc& sub(int value) { m_value -= value; return *this; }
    Calc& mult(int value) { m_value *= value; return *this; }

    int getValue() { return m_value; }
    void printThis() {
      std::cout << '\n' << "address: " << this;
    }

    static void fun(){
      std::cout << "hello, i am static function";
    }
};

int main()
{
    Calc calc{};
    calc.add(5).sub(3).mult(4);

    std::cout << calc.getValue() << '\n';
  calc.printThis();
    return 0;
}
