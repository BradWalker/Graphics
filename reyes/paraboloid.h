#ifndef paraboloid_h
#define paraboloid_h
/*------------------------------------------------------
 * TITLE:  paraboloid.h
 * AUTHOR: Adrian Skilling
 * ENVIR:  Linux
 * DESC:   Paraboloid primitive class
 * (C)     Copyright $Date: 1998/12/10 20:16:56 $
 * $Log: paraboloid.h,v $
 * Revision 1.2  1998/12/10 20:16:56  ady
 * Added tmin,tmax
 *
 * Revision 1.1  1997/11/29 18:09:05  ady
 * Initial revision
 *
 *-----------------------------------------------------*/

// C++ includes
#include <iostream>
#include <iomanip>

// Misc includes
#include <list>

// Reyes includes
#include "primitive.h"
#include "point3.h"
#include "boundbox3.h"
#include "microgrid.h"
#include "camera.h"
#include "matrix4.h"

class Paraboloid: public Primitive
{
  public:
    Paraboloid(float rmax,float zmin,float zmax,float thetamin,
               float thetamax,float tmin=0,float tmax=1); // Constructor
    friend std::ostream &operator<<(std::ostream &io,const Paraboloid &s);
    void Dump();
    bool TransformToEyeSpace(Matrix4 t_position,Matrix4 t_vector);
    void DoDice(MicroGrid &microgrid,int us,int vs);
    bool Splitable();
    void Split(std::list<Primitive*> &primlist);
    bool EyeBound(BoundBox3 &bb);

  private:
    float rmax;
    float zmin,zmax;
    float thetamin,thetamax;
    float tmin,tmax;
};

#endif
