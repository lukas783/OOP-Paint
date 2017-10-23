/*
***** filledRectangle.h ******
Class derived from shape to implement drawing and handling of a 
filled rectangle object

This file contains the filled rectangle class interface.

Author: Lucas Carpenter
Class: CSC300
Date: 09/25/2015

*/

// guard against multiple inclusions
#ifndef __FRECTANGLE_H_
#define __FRECTANGLE_H_

//includes
#include "rectangle.h"

// Line class interface
class FilledRectangle : public Rectangle
{
  
 public:
  FilledRectangle( int sX, int sY, int eX, int eY ); 
  void draw(int sX, int sY, int eX, int eY, int outline, int fill ) const;

};

#endif
