/*
CH-230-A
a12_p6.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*Area.h*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

//declaring class Circle inherited form Area class
class Circle : public Area
{
	//public properties of the circle class
public:
	Circle(const char *n, double a);
	~Circle();
	double calcArea() const;
	double  calcPerimeter() const;

//private properties of the circle class
private:
	double radius;
};

#endif
