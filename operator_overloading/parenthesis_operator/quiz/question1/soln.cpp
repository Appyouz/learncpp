#include <cassert>
#include <iostream>
#include <string>

class MyString
{
private:
	std::string m_string{};

public:
	MyString(const std::string& string = {})
		:m_string{ string }
	{
	}

	MyString operator()(int start, int length)
	{
		assert(start >= 0);
		assert(start + length <= static_cast<int>(m_string.length()) && "MyString::operator(int, int): Substring is out of range");

		return m_string.substr(start, length);
	}

	friend std::ostream& operator<<(std::ostream& out, const MyString& s)
	{
		out << s.m_string;

		return out;
	}
};

int main()
{
	MyString s { "Hello, world!" };
	std::cout << s(7, 5) << '\n'; // start at index 7 and return 5 characters

	return 0;
}
