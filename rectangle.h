/*
***** rectangle.h ******
Class derived from shape to implement drawing and handling of a rectangle object

This file contains the rectangle class interface.

Author: Lucas Carpenter
Class: CSC300
Date: 09/25/2015

*/

// guard against multiple inclusions
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

//includes
#include "shape.h"

// Line class interface
class Rectangle : public Shape
{
  
 public:
  Rectangle( int sX, int sY, int eX, int eY ); 
  void draw(int sX, int sY, int eX, int eY, int outline, int fill ) const;
  
};

#endif
