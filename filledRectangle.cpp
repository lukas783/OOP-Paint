
// include files
#include <iostream>
using namespace std;

#include "filledRectangle.h"
#include "drawing.h"
#include "globals.h"
#include "graphics.h"

// Filled rectangle class implementation

//Constructor
FilledRectangle::FilledRectangle(int sX, int sY, int eX, int eY ) : Rectangle(sX, sY, eX, eY)
{
}

//Draw function, takes in data for drawing a line, and outputs a line
//to the screen at those coordinates
void FilledRectangle::draw(int sX, int sY, int eX, int eY, int outline , int fill) const
{
  DrawFilledRectangle(sX, sY, eX, eY, getColor(fill));
  DrawRectangle(sX, sY, eX, eY, getColor(outline));
}
