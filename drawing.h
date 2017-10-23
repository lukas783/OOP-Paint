/*
 Drawing.h

Assists with integration of functions into a GLUT graphics program

Author: Lucas Carpenter
Class: CSC300
Date: 09/24/2015
*/
#ifndef __DRAWING_H_
#define __DRAWING_H_

#include "shape.h"

//void redraw(Shape *ptr);
void changeShape(int x, int y);     // function to change shape
void changeOutline(int x, int y);   // function to change outline color
void changeFill(int x, int y);      // function to change fill color
const float* getColor(int id);          // function to return color IDs

#endif
