/**
  vmath.h copyright(c) UncStatus++
  Praise The Lord!
*/

#ifndef VMATH_H
#define VMATH_H

#if 0
#include <cmath>
#include <math.h>
#endif

typedef float vector;
typedef vector vector3[3];
typedef vector vector4[4];
typedef vector vector6[6];

class VMath{
public:
  VMath();
  virtual ~VMath();

  vector Snap(int point);
  
};

#endif
