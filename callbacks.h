/*
                    ***** callbacks.h *****

OpenGL graphics program, illustrating use of GLUT and callback functions.

Author: John M. Weiss, Ph.D.
Class:  CSC300 Data Structures
Date:   Fall 2015

Modifications:
*/

// OpenGL callback function prototypes

// guard against multiple inclusions
#ifndef _Callbacks_H_
#define _Callbacks_H_

void display( void );
void reshape( int w, int h );
void keyboard( unsigned char key, int x, int y );
void mouseclick( int button, int state, int x, int y );
void mousedrag( int x, int y );
void redraw();
void move(int startx, int starty, int endx, int endy);
#endif
