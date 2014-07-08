#ifndef distantlight_h
#define distantlight_h
/*------------------------------------------------------
 * TITLE:  distantlight.h
 * AUTHOR: Adrian Skilling
 * ENVIR:  NetBSD
 * DESC:   Light source class
 * (C)     Copyright $Date: 1998/12/10 20:21:33 $
 * $Log: distantlight.h,v $
 * Revision 1.2  1998/12/10 20:21:33  ady
 * Make Ri style
 *
 * Revision 1.1  1997/11/29 17:56:18  ady
 * Initial revision
 *
 *-----------------------------------------------------*/

// Reyes includes
#include "light.h"

class Distantlight: public Light
{
  public:
    Distantlight(ParamList parameters);
    Distantlight(Point3 _from=Point3(0,0,0),Point3 _to=Point3(0,0,1),Colour _color=Colour(1,1,1),float _intensity=1.0);

    Colour Ambient();
    Colour Diffuse(Point3 P,Vector3 N);
    Colour Specular(Point3 P,Vector3 N,float shinyness);

    void Dump();

    friend ostream &operator<<(ostream &io,const Distantlight &l);

  private:
    Vector3 L;
    Colour colour;
    float intensity;
};

#endif
