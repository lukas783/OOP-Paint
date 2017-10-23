/*
***** filledEllipse.h ******
Class derived from shape to implement drawing and handling of a 
filled ellipse object

This file contains the filled ellipse class interface.

Author: Lucas Carpenter
Class: CSC300
Date: 09/25/2015

*/

// guard against multiple inclusions
#ifndef __FELLIPSE_H_
#define __FELLIPSE_H_

//includes
#include "ellipse.h"

// Line class interface
class FilledEllipse : public Ellipse
{
  
 public:
  FilledEllipse( int sX, int sY, int eX, int eY ); 
  void draw(int sX, int sY, int eX, int eY, int outline, int fill ) const;
  //int findS(int val1, int val2);

 private:
  int rX, rY, cX, cY = 0;
};

#endif
