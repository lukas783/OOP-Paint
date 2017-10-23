
// include files
#include <iostream>
using namespace std;

#include "filledEllipse.h"
#include "drawing.h"
#include "globals.h"
#include "graphics.h"

// Filled ellipse class implementation

//Constructor
FilledEllipse::FilledEllipse(int sX, int sY, int eX, int eY ) : Ellipse(sX, sY, eX, eY)
{
  rX = (abs( sX - eX )/2); // rx is radius across x axis
  rY = (abs( sY - eY )/2); // ry is radius across y axis
  cX = (findS(sX, eX)+rX); // sX + rX should equal cX
  cY = (findS(sY, eY)+rY); // sY + rY should equal cY
}

//Draw function, takes in data for drawing a line, and outputs a line
//to the screen at those coordinates
void FilledEllipse::draw(int sX, int sY, int eX, int eY, int outline , int fill) const
{
  DrawFilledEllipse(rX, rY, cX, cY, getColor(fill));
  DrawEllipse(rX, rY, cX, cY, getColor(outline));
}
