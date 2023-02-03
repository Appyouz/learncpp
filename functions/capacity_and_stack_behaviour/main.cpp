#include <vector>
#include <iostream>

int main()
{
	std::vector v{ 0, 1, 2, 3, 4 };
	std::cout << "size: " << v.size() << "  cap: " << v.capacity() << '\n';

	v.push_back(5); // add another element
	std::cout << "size: " << v.size() << "  cap: " << v.capacity() << '\n';


  int array[]{};
  int length { sizeof(array) / sizeof(array[0])};

  std::cout << '\n' << "length of an array: " << length << '\n';
  std::vector <int>v2{10};
  std::cout  << v2.capacity();
	return 0;
}
