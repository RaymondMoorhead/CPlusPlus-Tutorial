#include "P28_0_Vector.h"
#include <cmath>

Vector::Vector() : x(0), y(0)
{

}

Vector::Vector(const Vector& rhs) : x(rhs.x), y(rhs.y)
{

}

Vector::Vector(float x_, float y_) : x(x_), y(y_)
{

}

// post-constructor ways to set Vector to 2D or 3D

Vector& Vector::operator()(float x_, float y_)
{
  x = x_;
  y = y_;
  return *this;
}

// NON-CONST OPERATORS

Vector& Vector::operator=(Vector rhs)
{
  x = rhs.x;
  y = rhs.y;
  return *this;
}

Vector& Vector::operator+=(Vector rhs)
{
  x += rhs.x;
  y += rhs.y;
  return *this;
}

Vector& Vector::operator-=(Vector rhs)
{
  x -= rhs.x;
  y -= rhs.y;
  return *this;
}

Vector& Vector::operator*=(float scalar)
{
  x *= scalar;
  y *= scalar;
  return *this;
}

// CONST OPERATORS

bool Vector::operator==(Vector rhs) const
{
  static const float epsilon = 0.000001f;
  return abs(x - rhs.x) < epsilon &&
         abs(y - rhs.y) < epsilon;
}

Vector Vector::operator-() const
{
  return Vector(-x, -y);
}

Vector Vector::operator+(Vector rhs) const
{
  return Vector(x + rhs.x, y + rhs.y);
}

Vector Vector::operator-(Vector rhs) const
{
  return Vector(x - rhs.x, y - rhs.y);
}

Vector Vector::operator*(float scalar) const
{
  return Vector(x * scalar, y * scalar);
}

float Vector::operator*(Vector rhs) const
{
  // dot product
  return (x * rhs.x) + (y * rhs.y);
}

// MANIPULATION

float Vector::Length(void) const
{
  return sqrt(*this * *this);
}

// FRIEND FUNCTIONS

std::ostream& operator<<(std::ostream& os, const Vector& vec)
{
  os << '(' << vec.x << ", " << vec.y << ')';
  return os;
}