/*------------------------------------------------------
 * TITLE:  paramlist.h
 * AUTHOR: Adrian Skilling
 * ENVIR:  Linux
 * DESC:   Paramlist definitions
 * (C)     Copyright $Date: 1997/11/29 18:10:42 $
 * $Log: paramlist.h,v $
 * Revision 1.2  1997/11/29 18:10:42  ady
 * Now uses stdc list class
 *
 * Revision 1.1  1997/11/16 14:21:49  ady
 * Initial revision
 *
 *-----------------------------------------------------*/
#ifndef paramlist_h
#define paramlist_h

// Reyes includes
#include <list>
#include <iterator>
#include "parameter.h"

class ParamList
{
  public:
    ParamList(){}
    bool Exists(const char *name);

    int Int(const char *name);
    float Float(const char *name);
    char* String(const char *name);
    Vector3 Vector(const char *name);
    int Length(){return parameters.size();}
    void AddParameter(Parameter param){parameters.push_back(param);}
    
    std::list<Parameter> parameters;
};

#endif
