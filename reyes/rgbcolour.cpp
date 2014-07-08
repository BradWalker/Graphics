/*------------------------------------------------------
 * TITLE:  rgbcolour.c++
 * AUTHOR: Adrian Skilling
 * ENVIR:  Linux
 * DESC:   RGB colour class
 * (C)     Copyright $Date: 1997/11/16 14:18:48 $
 * $Log: rgbcolour.cpp,v $
 * Revision 1.1  1997/11/16 14:18:48  ady
 * Initial revision
 *
 * Revision 1.1  1997/02/23 22:58:14  ady
 * Initial revision
 *
 *-----------------------------------------------------*/

#include <iostream>

// Reyes includes
#include "rgbcolour.h"

//=======================================
//========STREAM INPUT/OUTPUT============
//=======================================

std::ostream &operator<<(std::ostream &io,const RGBColour &c)
{
  io << "[" << (int)c.r << "," << (int)c.g << "," << (int)c.b << "]";
}
