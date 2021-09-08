/*
CH-230-A
a12_p7.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*Rectangle.h*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

//declaring Rectangle class
class Rectangle : public Area
{
	//ppublic properties of the rectangle class
public:
	Rectangle(const char *n, double a, double b);
	Rectangle(const char *n, double a);
	~Rectangle();
	double calcArea() const;
	double  calcPerimeter() const;

//private properties of the rectangle class
private:
	double length;
	double width;
};

#endif
