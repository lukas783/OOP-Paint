
// include files
#include <iostream>
using namespace std;

#include "rectangle.h"
#include "drawing.h"
#include "globals.h"
#include "graphics.h"

// Rectangle class implementation

//Constructor
Rectangle::Rectangle(int sX, int sY, int eX, int eY ) : Shape( sX, sY, eX, eY, outlineId, fillId )
{
}

//Draw function, takes in data for drawing a line, and outputs a line
//to the screen at those coordinates
void Rectangle::draw(int sX, int sY, int eX, int eY, int outline , int fill) const
{
  DrawRectangle(sX, sY, eX, eY, getColor(outline));
}
  
