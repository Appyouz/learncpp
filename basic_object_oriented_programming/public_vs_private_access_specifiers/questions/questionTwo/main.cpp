#include <iostream>

class Point3d{
private: 
  int m_x{};
  int m_y{};
  int m_z{};

public:
  void setValues(int x, int y,int z){
    m_x = x;
    m_y = y;
    m_z = z;
  }

  void print(){
    std::cout << "<" << m_x << "," << m_y << "," << m_z << ">" ;
  }

  bool isEqual(const Point3d& p){
    return m_x == p.m_x && m_y == p.m_y && p.m_z;
  }
};
int main (int argc, char *argv[])
{
  Point3d point;
  point.setValues(1, 2, 3);
  point.print();
  std::cout << '\n';

  std::cout << "b): " << '\n';
  // b) 
  Point3d point1;
    point1.setValues(1, 2, 3);

    Point3d point2;
    // point2.setValues(1, 2, 3);

    point2.setValues(3, 4, 5);
    if (point1.isEqual(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal\n";
    }

    Point3d point3;
    // point3.setValues(3, 4, 5);
    point3.setValues(1, 2, 3);

    if (point1.isEqual(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal\n";
    }
  return 0;
}
