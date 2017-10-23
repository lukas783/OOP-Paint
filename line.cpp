
// include files
#include <iostream>
using namespace std;

#include "line.h"
#include "drawing.h"
#include "globals.h"
#include "graphics.h"

// Line class implementation

//Constructor
Line::Line(int sX, int sY, int eX, int eY ) : Shape( sX, sY, eX, eY, outlineId, fillId )
{
}

//Draw function, takes in data for drawing a line, and outputs a line
//to the screen at those coordinates
void Line::draw(int sX, int sY, int eX, int eY, int outline , int fill) const
{
  DrawLine(sX, sY, eX, eY, getColor(outline));
}
  
