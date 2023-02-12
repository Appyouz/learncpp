#include "point3d.hpp" // point3d class defined here
#include "vector3d.hpp" // for the parameter of the function movebyvector()

#include <iostream>

point3d::point3d(double x, double y, double z)
  : m_x{x}, m_y{y}, m_z{z}
{}

void point3d::movebyvector(const vector3d& v)
{
    // add the vector components to the corresponding point coordinates
    m_x += v.m_x;
    m_y += v.m_y;
    m_z += v.m_z;
}

void point3d::print() const
{
    std::cout << "point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}
