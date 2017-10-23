# Makefile for CSC300 PA#1 (paint program) using OpenGL and GLUT.

# Author: John M. Weiss, Ph.D.
# Class:  CSC300 Data Structures
# Date:   Fall 2015

# Usage:  make target1 target2 ...

#-----------------------------------------------------------------------

# GNU C/C++ compiler and linker:
LINK = g++

# Turn on optimization and warnings:
# CPPFLAGS = <preprocessor flags go here>
CFLAGS = -Wall -O -g
CXXFLAGS = $(CFLAGS) -std=c++11

# OpenGL/Mesa libraries for Linux
GL_LIBS = -lglut -lGLU -lGL -lm

#-----------------------------------------------------------------------
# Specific targets:

# MAKE allows the use of "wildcards", to make writing compilation instructions
# a bit easier. GNU make uses $@ for the target and $^ for the dependencies.

all:	SDSMTPaint

SDSMTPaint: paint.o drawing.o callbacks.o globals.o graphics.o shape.o line.o rectangle.o ellipse.o filledEllipse.o filledRectangle.o
	$(LINK) -o $@ $^ $(GL_LIBS)

clean:
	rm -f *.o ~* core a.out
