#include <iostream>
#include <string> 
#include <string_view>
#include <cassert>
class MyString {
private:
  std::string m_str {};
public:
  MyString(std::string_view str): m_str{str}{}
  friend std::ostream& operator<<(std::ostream& out, const MyString& str);
  MyString operator()(int start, int length);
};

 std::ostream& operator<<(std::ostream& out, const MyString& str) {
  out << str.m_str ;
  return out;
}

MyString MyString::operator()(int start, int length){
    assert(start >= 0);
		assert(start + length <= static_cast<int>(m_str.length()) && "MyString::operator(int, int): Substring is out of range");

		return m_str.substr(start, length);

}
int main()
{
    MyString s { "Hello, world!" };
    std::cout << s(7, 5) << '\n'; // start at index 7 and return 5 characters

    return 0;
}
