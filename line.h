/*
***** line.h ******
Class derived from shape to implement drawing and handling of a line object

This file contains the line class interface.

Author: Lucas Carpenter
Class: CSC300
Date: 09/25/2015

*/

// guard against multiple inclusions
#ifndef __LINE_H_
#define __LINE_H_

//includes
#include "shape.h"

// Line class interface
class Line : public Shape
{
  
 public:
  Line( int sX, int sY, int eX, int eY ); 
  void draw(int sX, int sY, int eX, int eY, int outline, int fill ) const;
  
};

#endif
