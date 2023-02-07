#include <iostream>
#include <array>
#include <cassert>
#include <vector>
class Stack {
 private: 
  using Array = std::array<int, 10>;
  using Index = Array::size_type;

  Array m_array{};
  Index m_size{};

public:

  void print() {


    std::cout << "(";
    for (int count {0}; count < m_size; ++count) {
     std::cout << m_array[count] << ' ';
    }
    std::cout << ")\n";
  }
  void reset() {
    m_size = 0;
  }

  bool push(int num) {
    if (m_size == m_array.size()) {
      return false;
    }
    m_array[m_size++] = num;
    return true;
  }

  int pop() {
    assert(m_size > 0 && "stack is empty, cannot pop anymore"); 
    return m_array[--m_size];
  }
};
int main (int argc, char *argv[])
{
 Stack stack;
	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print(); 
  return 0;
}
