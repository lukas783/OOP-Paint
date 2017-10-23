/*
                    ***** shape.h *****

OOP example illustrating inheritance and late binding via virtual functions in C++.
Inheritance is used to derive various shape classes (Point, Line, Circle, Rectangle, Square)
from a base Shape class.

This file contains the Shape class interface.

Author: John M. Weiss, Ph.D.
Class:  CSC300 Data Structures
Date:   Fall 2015

Modifications:
*/

//-----------------------------------------------------------------------

// guard against multiple inclusions
#ifndef _Shape_H_
#define _Shape_H_

// include files
#include <iostream>
using namespace std;

//-----------------------------------------------------------------------

// Shape class interface
// Note that this is an abstract class since it contains pure virtual functions.
class Shape
{
 protected:                      // note use of protected instead of private
  int sX, sY, eX, eY, o, f = 0;

 public:                         // public methods
  //Constructor
  Shape( int sX = 0, int sY = 0, int eX = 0, int eY = 0,
	 int o = -1, int f = -1 );
  //Destructor
  virtual ~Shape( );
  //Pure virtual draw method
  virtual void draw(int sX, int sY, int eX, int eY, int o, int f) const = 0;
};

#endif
