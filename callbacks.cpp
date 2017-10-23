/*
                    ***** callbacks.cpp *****

OpenGL graphics program, illustrating use of GLUT and callback functions.

Author: John M. Weiss, Ph.D.
Class:  CSC300 Data Structures
Date:   Fall 2015

Modifications:

Bugs: Current program doesn't move item, however function is started
      and am working on fixing methods
*/

// include files
#include <cstdlib>
#include <iostream>
using namespace std;

// the GLUT header automatically includes gl.h and glu.h
#include <GL/freeglut.h>
#include "globals.h"
#include "callbacks.h"
#include "graphics.h"
#include "drawing.h"
#include "shape.h"
#include "line.h"
#include "rectangle.h"
#include "ellipse.h"
#include "filledEllipse.h"
#include "filledRectangle.h"

/******************************************************************************/
/*                          OpenGL callback functions                         */
/******************************************************************************/

// callback function that tells OpenGL how to redraw window
void display( void )
{
    // clear the display
    glClear( GL_COLOR_BUFFER_BIT );
    
    // Begin drawing static objects
    DrawFilledRectangle(0, ScreenHeight, 100, 0, Gray ); // Gray sidebar
    redraw(); // re-draws screen to update shapes on screen
    
    DrawLine(60, ScreenHeight-40, 90, ScreenHeight-10, Black); // line 'picture'
    DrawRectangle(10, ScreenHeight-90, 40, ScreenHeight-60, Black); //unfilled rect 'picture'
    DrawFilledRectangle(60, ScreenHeight-90, 90, ScreenHeight-60, Black); //filled rect 'picture'
    DrawRectangle(60, ScreenHeight-90, 90, ScreenHeight-60, White); // outline of filled rect 'pic'
    DrawEllipse(15, 15, 25, ScreenHeight-125, Black); // circle 'picture'
    DrawFilledEllipse(15, 15, 75, ScreenHeight-125, Black); // filled circle 'pic'
    DrawEllipse(15, 15, 75, ScreenHeight-125, White); // outline of filled circle 'pic'

    DrawFilledRectangle(0, ScreenHeight-150, 50, ScreenHeight-200, Black);
    DrawFilledRectangle(50, ScreenHeight-150, 100, ScreenHeight-200, White);
    DrawFilledRectangle(0, ScreenHeight-200, 50, ScreenHeight-250, Dark_Gray);
    DrawFilledRectangle(50, ScreenHeight-200, 100, ScreenHeight-250, Light_Gray);
    DrawFilledRectangle(0, ScreenHeight-250, 50, ScreenHeight-300, Red);
    DrawFilledRectangle(50, ScreenHeight-250, 100, ScreenHeight-300, Light_Red);
    DrawFilledRectangle(0, ScreenHeight-300, 50, ScreenHeight-350, Green);
    DrawFilledRectangle(50, ScreenHeight-300, 100, ScreenHeight-350, Light_Green);
    DrawFilledRectangle(0, ScreenHeight-350, 50, ScreenHeight-400, Blue);
    DrawFilledRectangle(50, ScreenHeight-350, 100, ScreenHeight-400, Light_Blue);
    DrawFilledRectangle(0, ScreenHeight-400, 50, ScreenHeight-450, Yellow);
    DrawFilledRectangle(50, ScreenHeight-400, 100, ScreenHeight-450, Light_Yellow);
    DrawFilledRectangle(0, ScreenHeight-450, 50, ScreenHeight-500, Orange);
    DrawFilledRectangle(50, ScreenHeight-450, 100, ScreenHeight-500, Light_Orange);
    DrawFilledRectangle(0, ScreenHeight-500, 50, ScreenHeight-550, Magenta);
    DrawFilledRectangle(50, ScreenHeight-500, 100, ScreenHeight-550, Light_Magenta);
    DrawFilledRectangle(0, ScreenHeight-550, 50, ScreenHeight-600, Cyan);
    DrawFilledRectangle(50, ScreenHeight-550, 100, ScreenHeight-600, Light_Cyan);
    DrawFilledRectangle(0, ScreenHeight-600, 50, ScreenHeight-650, Purple);
    DrawFilledRectangle(50, ScreenHeight-600, 100, ScreenHeight-650, Light_Purple);
    for(int i = 0; i <= 13; i++)
      DrawLine(0, ScreenHeight-(i*50), 100, ScreenHeight-(i*50), Black); // draws all horizontal dividers
    DrawLine(0, ScreenHeight, 0, ScreenHeight-650, Black );
    DrawLine(50, ScreenHeight, 50, ScreenHeight-650, Black ); // central divider in sidebar 1
    DrawLine(100, ScreenHeight, 100, ScreenHeight-650, Black);

    switch(shapeId) {
    case 0:
      DrawLine(10, ScreenHeight-40, 40, ScreenHeight-10, getColor(outlineId));
      break;
    case 1:
      DrawRectangle(10, ScreenHeight-40, 40, ScreenHeight-10, getColor(outlineId));
      break;
    case 2:
      DrawFilledRectangle(10, ScreenHeight-40, 40, ScreenHeight-10, getColor(fillId));
      DrawRectangle(10, ScreenHeight-40, 40, ScreenHeight-10, getColor(outlineId));
      break;
    case 3:
      DrawEllipse(15, 15, 25, ScreenHeight-25, getColor(outlineId));
      break;
    case 4:
      DrawFilledEllipse(15, 15, 25, ScreenHeight-25, getColor(fillId));
      DrawEllipse(15, 15, 25, ScreenHeight-25, getColor(outlineId));
      break;
      
    }
    // flush graphical output
    glFlush();
}

/******************************************************************************/

// callback function that tells OpenGL how to resize window
// note that this is called when the window is first created
void reshape( int w, int h )
{
    // store new window dimensions globally
    ScreenWidth = w;
    ScreenHeight = h;

    // how to project 3-D scene onto 2-D
    glMatrixMode( GL_PROJECTION );		// use an orthographic projection
    glLoadIdentity();				// initialize transformation matrix
    gluOrtho2D( 0.0, w, 0.0, h );		// make OpenGL coordinates
    glViewport( 0, 0, w, h );			// the same as the screen coordinates
}

/******************************************************************************/

// callback function that tells OpenGL how to handle keystrokes
void keyboard( unsigned char key, int x, int y )
{
    // correct for upside-down screen coordinates
  y = ScreenHeight - y;
  
  switch ( key )
    {
      // Escape quits program
    case 'q':
    case EscapeKey:
      exit( 0 );
      redraw();
      break;
    case 'd':  // deletes last image added
      array[sizex][0] = 0;
      array[sizex][1] = 0;
      array[sizex][2] = 0;
      array[sizex][3] = 0;
      array[sizex][4] = -1;
      array[sizex][5] = -1;
      array[sizex][6] = -1;
      sizex = sizex-1;
      display();
      break;
    case 'c': // deletes all images
      for(int i = 0; i < sizex; i++)
	{
	  array[sizex][0] = 0;
	  array[sizex][1] = 0;
	  array[sizex][2] = 0;
	  array[sizex][3] = 0;
	  array[sizex][4] = -1;
	  array[sizex][5] = -1;
	  array[sizex][6] = -1;
	  sizex = sizex-sizex;
	}
      display();
      break;
      
      // anything else redraws window
    default:
      glutPostRedisplay();
      redraw();
      break;
    }
  redraw();
}

/******************************************************************************/

// callback function for mouse button click events
void mouseclick( int button, int state, int x, int y )
{
    // correct for upside-down screen coordinates
    y = ScreenHeight - y;   
        
    // handle mouse click events
    switch ( button )
    {
	case GLUT_LEFT_BUTTON:				 // left button: should create objects
	  
	  if ( state == GLUT_DOWN ) {
	    if(x < 100 && y > (ScreenHeight - 150))      // sidebar selection for shape
	      changeShape(x, y);
	    else if(x < 100 && y < (ScreenHeight - 150)) // sidebar selection for color
	      changeOutline(x, y);
	    if(x > 100) {                                // if not sidebar, then draw curr shape
	      if(shapeId == -1)                          // if no shape has been selected
		break;                                   // break from switch loop
	    }
	    clickX = x;
	    clickY = y;

	  } else if ( state == GLUT_UP ) {		// release
	    display();
	    redraw();
	    if(x > 100 && clickX > 100) {                               // since mouse released, draw shape
	      Shape *ptr;
	      array[sizex][0]=clickX;
	      array[sizex][1]=clickY;
	      array[sizex][2]=x;
	      array[sizex][3]=y;
	      array[sizex][5]=outlineId;
	      array[sizex][6]=fillId;
	      switch(shapeId) {
	      case 0: // Line
		ptr = new Line(clickX, clickY, x, y);
                array[sizex][4]=0;
		sizex++;
		break;
	      case 1: // Rectangle
		ptr = new Rectangle(clickX, clickY, x, y);
                array[sizex][4]=1;
		sizex++;
		break;
	      case 2: // Filled Rectangle
		ptr = new FilledRectangle(clickX, clickY, x, y);
                array[sizex][4]=2;
		sizex++;
		break;
	      case 3: // Ellipse
		ptr = new Ellipse(clickX, clickY, x, y);
                array[sizex][4]=3;
		sizex++;
		break;
	      case 4: // Filled Ellipse
		ptr = new FilledEllipse(clickX, clickY, x, y);
                array[sizex][4]=4;
		sizex++;
		break;
	      default:// No shape selected or out of bounds shapeId
		return;

	      }
	      ptr->draw(clickX, clickY, x, y, outlineId, fillId);
	
	  }
	    clickX = 0;
	    clickY = 0;
	  }	  
	  break;

	case GLUT_RIGHT_BUTTON:				// right button: should move objects

	  if ( state == GLUT_DOWN ) {			// press
	    if(x < 100 && y < (ScreenHeight - 150))
	      changeFill(x, y);
	    clickX = x;
	    clickY = y;
        	
	  } else if ( state == GLUT_UP ) {		// release
	    move(clickX, clickY, x, y);
	    display();
	    redraw();
          

	  }
	  break;

    }
}

void redraw()
{
  Shape *ptr;
  int size = 0;
  while(size!=sizex)
    {
      switch(array[size][4])
	{
	case 0:
	  ptr = new Line(array[size][0], array[size][1], array[size][2], array[size][3]);
	  break;
	case 1:
	  ptr = new Rectangle(array[size][0], array[size][1], array[size][2], array[size][3]);
	  break;
	case 2:
	  ptr = new FilledRectangle(array[size][0], array[size][1], array[size][2], array[size][3]);
	  break;
	case 3:
	  ptr = new Ellipse(array[size][0], array[size][1], array[size][2], array[size][3]);
	  break;
	case 4:
	  ptr = new FilledEllipse(array[size][0], array[size][1], array[size][2], array[size][3]);
	  break;
	default:
	  return;
	}
      ptr->draw(array[size][0], array[size][1], array[size][2], array[size][3], array[size][5], array[size][6]);
      size++;
    }
}

void move(int startx, int starty, int endx,int endy)
{
    int sx, sy, ex, ey, cx, cy, temp = 0;
    int shape, outlineIds, fillIds = -1;
    
    for(int i = 0; i< sizex; i++)
    {
	//find center of object
	if(array[i][0] > array[i][2])
	    cx = ((array[i][0] - array[i][2])/2)+array[i][2];
	else
	    cx = ((array[i][2] - array[i][0])/2)+array[i][0];
        if(array[i][1] > array[i][3])
            cy = ((array[i][1] - array[i][3])/2)+array[i][3];
        else
            cy = ((array[i][3] - array[i][1])/2)+array[i][1];

	//compare where click is to center
	if(cx>startx)
	{
	    sx = cx;
	    ex = startx;
	}
        else
        {
            ex = cx;
            sx = startx;
        }
	
	//set center of y
        if(cx>startx)
        {
            sy = cy;
            ey = starty;
        }
        else
        {
            ey = cy;
            sy = starty;
        }

	//compare if close to center
	if(((sx-ex) >= 25 && ((sy-ey) >= 25)))
	{
	    sx = array[sizex][0];
            sy = array[sizex][1];
            ex = array[sizex][2];
            ey = array[sizex][3];
            shape =  array[sizex][4];
            outlineIds = array[sizex][5];
            fillIds = array[sizex][6];
	    temp = i;
	    i = sizex;
	}

	for(i = i+1; i < sizex; i++)
	{
            array[sizex-1][0] = array[sizex][0];
            array[sizex-1][0] = array[sizex][1];
            array[sizex-1][0] = array[sizex][2];
            array[sizex-1][0] = array[sizex][3];
            array[sizex-1][0] =  array[sizex][4];
            array[sizex-1][0] = array[sizex][5];
            array[sizex-1][0] = array[sizex][6];
   
	}

	cx = startx - endx;
	cy = starty - endy;
	i = sizex;

        //move shape
	array[sizex][0]=sx+cx;//move
        array[sizex][1]=sy+cy;
        array[sizex][2]=ex+cx;
        array[sizex][3]=ey+cy;
        array[sizex][4]=shape;
        array[sizex][5]=outlineIds;
        array[sizex][6]=fillIds;

	//set equal to sizex
    }
}
