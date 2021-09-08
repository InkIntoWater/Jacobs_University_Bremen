/*
CH-230-A
a12_p6.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*Square.h*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

//Declaring the Square class derived from the Rectangle class
class Square : public Rectangle
{
	//public properties of square class
public:
	Square(const char *n, double a);
	~Square();
	double calcArea() const;
	double  calcPerimeter() const;

//private properties of square class
private:
	double length;
};

#endif
