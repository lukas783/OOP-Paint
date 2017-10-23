/*
                    ***** shape.cpp *****

OOP example illustrating inheritance and late binding via virtual functions in C++.
Inheritance is used to derive various shape classes (Point, Line, Circle, Rectangle, Square)
from a base Shape class.

This file contains the Shape class implementation.

Author: John M. Weiss, Ph.D.
Class:  CSC300 Data Structures
Date:   Fall 2015

Modifications:
*/

// include files
#include <iostream>
using namespace std;

#include "shape.h"

// Shape class implementation
// Note that this is an abstract class since it contains pure virtual functions.

// constructor
// (int sX = 0, int sY = 0, int eX =0, int eY = 0, 
//         int o = -1, int f = -1);
//
Shape::Shape(int x1, int y1, int x2, int y2, int outline, int fill) : sX(x1), sY(y1), eX(x2), eY(y2), o(outline), f(fill)
{

}

// destructor
Shape::~Shape( )
{
  
}

