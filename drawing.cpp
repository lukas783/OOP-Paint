#include <cstdlib>
#include <iostream>

#include "globals.h"
#include "drawing.h"
#include "shape.h"

using namespace std;


void changeShape(int x, int y) {
  y = ScreenHeight - y;
  if(x > 50) {             // right column
    if(y > 0 && y < 50 )   // row 1, col 2
      shapeId = 0;           // line
    if(y > 50 && y < 100 ) // row 2, col 2
      shapeId = 2;           // filled rectangle
    if(y > 100 && y < 150 )// row 3, col 2
      shapeId = 4;           // filled circle
  } else if(x < 50) {      // left column
    if(y > 50 && y < 100 ) // row 2, col 1
      shapeId = 1;           // rectangle
    if(y > 100 && y < 150 )// row 3, col 1
      shapeId = 3;           // circle 
      }
}

void changeOutline(int x, int y) {
  y = ScreenHeight - y;
  if(x > 50) {             // right column
    if(y > 150 && y < 200) // row 4, col 2
      outlineId = 2;       // white
    if(y > 200 && y < 250) // row 5, col 2
      outlineId = 4;       // Light gray
    if(y > 250 && y < 300) // row 6, col 2
      outlineId = 6;       // light red
    if(y > 300 && y < 350) // row 7, col 2
      outlineId = 8;       // light green
    if(y > 350 && y < 400) // row 8, col 2
      outlineId = 10;      // light blue
    if(y > 400 && y < 450) // row 9, col 2
      outlineId = 12;      // light yellow
    if(y > 450 && y < 500) // row 10, col 2
      outlineId = 14;      // light orange
    if(y > 500 && y < 550) // row 11, col 2
      outlineId = 16;      // light pink
    if(y > 550 && y < 600) // row 12, col 2
      outlineId = 18;      // light cyan
    if(y > 600 && y < 650) // row 13, col 2
      outlineId = 20;      // light purple
  }
  if(x < 50) {             // left column
    if(y > 150 && y < 200) // row 4, col 1
      outlineId = 1;       // black
    if(y > 200 && y < 250) // row 5, col 1
      outlineId = 3;       // gray
    if(y > 250 && y < 300) // row 6, col 1
      outlineId = 5;       // red
    if(y > 300 && y < 350) // row 7, col 1
      outlineId = 7;       // green
    if(y > 350 && y < 400) // row 8, col 1
      outlineId = 9;       // blue
    if(y > 400 && y < 450) // row 9, col 1
      outlineId = 11;      // yellow
    if(y > 450 && y < 500) // row 10, col 1
      outlineId = 13;      // orange
    if(y > 500 && y < 550) // row 11, col 1
      outlineId = 15;      // pink
    if(y > 550 && y < 600) // row 12, col 1
      outlineId = 17;      // cyan
    if(y > 600 && y < 650) // row 13, col 1
      outlineId = 19;      // purple
  }
}

void changeFill(int x, int y) {
  y = ScreenHeight - y;
  if(x > 50) {             // right column
    if(y > 150 && y < 200) // row 4, col 2
      fillId = 2;       // white
    if(y > 200 && y < 250) // row 5, col 2
      fillId = 4;       // Light gray
    if(y > 250 && y < 300) // row 6, col 2
      fillId = 6;       // light red
    if(y > 300 && y < 350) // row 7, col 2
      fillId = 8;       // light green
    if(y > 350 && y < 400) // row 8, col 2
      fillId = 10;      // light blue
    if(y > 400 && y < 450) // row 9, col 2
      fillId = 12;      // light yellow
    if(y > 450 && y < 500) // row 10, col 2
      fillId = 14;      // light orange
    if(y > 500 && y < 550) // row 11, col 2
      fillId = 16;      // light pink
    if(y > 550 && y < 600) // row 12, col 2
      fillId = 18;      // light cyan
    if(y > 600 && y < 650) // row 13, col 2
      fillId = 20;      // light purple
  }
  if(x < 50) {             // left column
    if(y > 150 && y < 200) // row 4, col 1
      fillId = 1;       // black
    if(y > 200 && y < 250) // row 5, col 1
      fillId = 3;       // gray
    if(y > 250 && y < 300) // row 6, col 1
      fillId = 5;       // red
    if(y > 300 && y < 350) // row 7, col 1
      fillId = 7;       // green
    if(y > 350 && y < 400) // row 8, col 1
      fillId = 9;       // blue
    if(y > 400 && y < 450) // row 9, col 1
      fillId = 11;      // yellow
    if(y > 450 && y < 500) // row 10, col 1
      fillId = 13;      // orange
    if(y > 500 && y < 550) // row 11, col 1
      fillId = 15;      // pink
    if(y > 550 && y < 600) // row 12, col 1
      fillId = 17;      // cyan
    if(y > 600 && y < 650) // row 13, col 1
      fillId = 19;      // purple
  }
}

const float* getColor(int id) {
  switch(id) {
  case 1:
    return Black;
  case 2:
    return White;
  case 3:
    return Dark_Gray;
  case 4:
    return Light_Gray;
  case 5:
    return Red;
  case 6:
    return Light_Red;
  case 7:
    return Green;
  case 8:
    return Light_Green;
  case 9:
    return Blue;
  case 10:
    return Light_Blue;
  case 11:
    return Yellow;
  case 12:
    return Light_Yellow;
  case 13:
    return Orange;
  case 14:
    return Light_Orange;
  case 15:
    return Magenta;
  case 16:
    return Light_Magenta;
  case 17:
    return Cyan;
  case 18:
    return Light_Cyan;
  case 19:
    return Purple;
  case 20:
    return Light_Purple;
  }
  return Black; 
}
