#include "vector3.hpp"
#include <cmath>
#include <iostream>
#include <cstring>

namespace l2
{

  Vector3::Vector3()
  {
    memset(v.buffer, 0, sizeof(Vector3::internal_representation));
  }

  Vector3::Vector3(double x, double y, double z)
  {
    v.x = x;
    v.y = y;
    v.z = z;
  }

  double Vector3::length() const
  {
    return sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
  }
  void Vector3::mul(double a)
  {
    v.x *= a;
    v.y *= a;
    v.z *= a;
  }

  Vector3 vector3_add(const Vector3 &a, const Vector3 &b)
  {
    Vector3 c;
    c.v.x = a.v.x + b.v.x;
    c.v.y = a.v.y + b.v.y;
    c.v.z = a.v.z + b.v.z;
    return c;
  }

  void vector3_print(const Vector3 &a)
  {
    std::cout << "[" << a.v.x << ", " << a.v.y << ", " << a.v.z << "]\t" << a.length() << std::endl;
  }
} // namespace l2
