/*
***** ellipse.h ******
Class derived from shape to implement drawing and handling of a ellipse object

This file contains the ellipse class interface.

Author: Lucas Carpenter
Class: CSC300
Date: 09/25/2015

*/

// guard against multiple inclusions
#ifndef __ELLIPSE_H_
#define __ELLIPSE_H_

//includes
#include "shape.h"

// Line class interface
class Ellipse : public Shape
{
  
 public:
  Ellipse( int sX, int sY, int eX, int eY ); 
  void draw(int sX, int sY, int eX, int eY, int outline, int fill ) const;
  int findS(int val1, int val2);

 protected:
  int rX, rY, cX, cY = 0;
};

#endif
