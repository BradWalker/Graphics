/*------------------------------------------------------
 * TITLE:  vector3.c++
 * AUTHOR: Adrian Skilling
 * ENVIR:  Linux
 * DESC:   3D vector class
 * (C)     Copyright $Date: 1997/11/21 20:17:43 $
 * $Log: vector3.cpp,v $
 * Revision 1.2  1997/11/21 20:17:43  ady
 * Added - operator
 *
 * Revision 1.1  1997/11/16 14:21:49  ady
 * Initial revision
 *
 * Revision 1.2  1997/08/28 00:05:57  ady
 * Remove include "fixed.h"
 *
 * Revision 1.1  1997/02/23 22:59:44  ady
 * Initial revision
 *
 *-----------------------------------------------------*/

// C includes
#include <math.h>

// C++ includes
#include <iostream>
#include <iomanip>

// Reyes includes
#include "vector3.h"

//=======================================
// Constructor
//---------------------------------------
Vector3::Vector3(float x,float y,float z)
{
  this->x=x;
  this->y=y;
  this->z=z;
}

//=======================================
//========STREAM INPUT/OUTPUT============
//=======================================

std::ostream &operator<<(std::ostream &io,const Vector3 &v)
{
  io.setf(std::ios::showpoint | std::ios::right | std::ios::fixed);
  io << "(";
  io << std::setprecision(2) << v.x;
  io << ",";
  io << std::setprecision(2) << v.y;
  io << ",";
  io << std::setprecision(2) << v.z;
  io << ")";
  return io;
}

//=======================================
//======= ARITHMETIC OPERATIONS =========
//=======================================

Vector3 operator+(Vector3 a,Vector3 b)
{
  return Vector3(a.x+b.x,a.y+b.y,a.z+b.z);
}

Vector3 operator-(Vector3 a,Vector3 b)
{
  return Vector3(a.x-b.x,a.y-b.y,a.z-b.z);
}

Vector3 operator^(Vector3 a,Vector3 b)  // Cross-product
{
  return Vector3(a.y*b.z-a.z*b.y,a.z*b.x-a.x*b.z,a.x*b.y-a.y*b.x);
}

float operator*(Vector3 a,Vector3 b)  // Dot-product
{
  return (a.x*b.x+a.y*b.y+a.z*b.z);
}

Vector3 operator*(float s,Vector3 v)
{
  return Vector3(s*v.x,s*v.y,s*v.z);
}

Vector3 operator*(Vector3 v,float s)
{
  return Vector3(s*v.x,s*v.y,s*v.z);
}

Vector3 operator/(Vector3 v,float s)
{
  return Vector3(v.x/s,v.y/s,v.z/s);
}

Vector3 operator-(Vector3 v)
{
  return Vector3(-v.x,-v.y,-v.z);
}

bool operator==(Vector3 a,Vector3 b)
{
  return ((a.x==b.x)&&(a.y==b.y)&&(a.z==b.z));
}

bool operator!=(Vector3 a,Vector3 b)
{
  return ((a.x!=b.x)||(a.y!=b.y)||(a.z!=b.z));
}

void Vector3::Normalise()
{
  float d;

  d=Length();
  if (d>0)
  {
    x=x/d;
    y=y/d;
    z=z/d;
  }
}

float Vector3::Length()
{
  return sqrt(x*x+y*y+z*z);
}
