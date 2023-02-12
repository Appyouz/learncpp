#include <iostream>
class Storage;
class Display {
private:
  int m_id {};
public:
  Display(int id = 1): m_id {id}{}
  void displayItem(const Storage& storage, const Display& display);

};
class Storage {
private:
  int m_data{};
public:
  Storage(int data = 0): m_data {data}{} 
  friend void Display::displayItem(const Storage& storage, const Display& display);
};

void Display::displayItem(const Storage &storage, const Display& display) {
   std::cout << "The value of id " << display.m_id << " is: " << storage.m_data << '\n';
}

int main (int argc, char *argv[])
{
  Display display {2};
  Storage storage {20};
  display.displayItem(storage, display);


  // storage.displayItem(storage, display); // cannot do tis since displayItem is just friend 
  // a member function of Storage class
  
  return 0;
}
