/*
                    ***** globals.h *****

OpenGL graphics program, illustrating use of GLUT and callback functions.

Author: John M. Weiss, Ph.D.
Class:  CSC300 Data Structures
Date:   Fall 2015

Modifications:
*/

// guard against multiple inclusions
#ifndef _Globals_H_
#define _Globals_H_

// symbolic constants

// keypresses
const int EscapeKey = 27;

// colors
const float Black[]	   = { 0.0, 0.0, 0.0 };
const float Gray[]         = { 0.75, 0.75, 0.75 };
const float Dark_Gray[]    = { 0.5, 0.5, 0.5 };
const float Light_Gray[]   = { 0.9, 0.9, 0.9 };
const float Red[]	   = { 1.0, 0.0, 0.0 };
const float Light_Red[]    = { 1.0, 0.5, 0.5 };
const float Green[]        = { 0.0, 1.0, 0.0 };
const float Light_Green[]  = { 0.5, 1.0, 0.5 };
const float Blue[]	   = { 0.0, 0.0, 1.0 };
const float Light_Blue[]   = { 0.5, 0.5, 1.0 };
const float Magenta[]	   = { 1.0, 0.0, 1.0 };
const float Light_Magenta[]= { 1.0, 0.5, 1.0 };
const float Cyan[]	   = { 0.0, 1.0, 1.0 };
const float Light_Cyan[]   = { 0.5, 1.0, 1.0 };
const float Yellow[]	   = { 1.0, 1.0, 0.0 };
const float Light_Yellow[] = { 1.0, 1.0, 0.5 };
const float Orange[]       = { 1.0, 0.65, 0.0};
const float Light_Orange[] = { 1.0, 0.65, 0.5};
const float Purple[]       = { 0.5,0.1, 0.9};
const float Light_Purple[] = { 0.5,0.5, 0.9 };
const float White[]	   = { 1.0, 1.0, 1.0 };

// global vars
extern int ScreenWidth;
extern int ScreenHeight;
extern int shapeId;
extern int outlineId;
extern int fillId;
extern int clickX, clickY;
extern int array[200][7];
extern int sizex;
#endif
