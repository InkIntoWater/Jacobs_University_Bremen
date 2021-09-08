/*
CH-230-A
a12_p7.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*Ring.h*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

//declaring the Ring class
class Ring : public Circle
{
	//public properties of the Ring class
public:
	Ring(const char *n, double outer, double inner);
	~Ring();
	double calcArea() const;
	double  calcPerimeter() const;

//private properties of the Ring class
private:
	double innerradius;
};

#endif
