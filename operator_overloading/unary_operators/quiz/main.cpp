#include <iostream>

class Point {
  private:
  double m_x {};
  double m_y {};
  double m_z {};
public:
  Point(double x = 0, double y = 0, double z = 0)
  : m_x {x}, m_y {y}, m_z {z}{}
  
  Point operator+() const;
  Point operator-() const;
  double getX(){return m_x;}
  double getY(){return m_y;}
  double getZ(){return m_z;}
};

Point Point::operator+() const{
  return {+m_x, +m_y, +m_z};
}

Point Point::operator-() const{
  return {-m_x, -m_y, -m_z};
}
int main (int argc, char *argv[])
{
  Point point {1.0, 2.0, 3.0};
  std::cout << (-point).getX() << " ";
  std::cout << (-point).getY() << " ";
  std::cout << (-point).getZ() << " ";
  return 0;
}
