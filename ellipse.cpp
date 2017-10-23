
// include files
#include <iostream>
using namespace std;

#include "ellipse.h"
#include "drawing.h"
#include "globals.h"
#include "graphics.h"

// Ellipse class implementation

//Constructor
Ellipse::Ellipse(int sX, int sY, int eX, int eY ) : Shape( sX, sY, eX, eY, outlineId, fillId )
{
  rX = (abs( sX - eX )/2); // rx is the radius across x axis
  rY = (abs( sY - eY )/2); // ry is the radius across y axis
  cX = (findS(sX, eX)+rX); // sX + rX should equal cX
  cY = (findS(sY, eY)+rY); // sY + rY should equal cY
}

//Draw function, takes in data for drawing a line, and outputs a line
//to the screen at those coordinates
void Ellipse::draw(int sX, int sY, int eX, int eY, int outline , int fill) const
{
  DrawEllipse(rX, rY, cX, cY, getColor(outline));
}
  

int Ellipse::findS(int val1, int val2) // Function that returns the smallest value
{
  if(val1 > val2)
    return val2;
  return val1;
}
