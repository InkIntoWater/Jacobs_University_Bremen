/*
a11_p1.c
Box.cpp
Roshan Nepal
ro.nepal@jacobs-university.de
*/

#include<iostream>
#include "Box.h"

//setter methods
void Box::setHeight(double h)
{
	height = h;
}
void Box::setWidth(double w)
{
	width = w;
}
void Box::setDepth(double d)
{
	depth = d;
}

//getter methods
double Box::getHeight () const
{
	return height;
}
double Box::getWidth () const
{
	return width;
}
double Box::getDepth() const
{
	return depth;
}

//empty a constructor with 0 as default values
Box::Box()
{
	height = 0;
	width = 0;
	depth = 0;
}

//construct a box with given parameters
Box::Box(double h, double w, double d)
{
	height = h;
	width = w;
	depth = d;
}

//create a copy of existing box object
Box::Box(const Box& b)
{
 
	height = b.height;
	width = b.width;
	depth = b.depth;
}

//computation of volume of box
double Box::Volume ()
{
	
	double v = height * width * depth;
	return v;
}

//destructor
Box:: ~Box()
{
}

