#include <iostream>
class IntPair {
  public:
int num1 {};
  int num2 {};

  void set(int x, int y) {
    num1 = x;
    num2 = y;
  }

  void print(){
    std::cout << "number one: " << num1 << " numbre two: " << num2 << '\n'; 
  }
};
int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2 { 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

	return 0;
}
