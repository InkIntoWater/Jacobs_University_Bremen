/*
CH-230-A
a12_p7.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*Circle.cpp*/

#include <iostream>
#include <cmath>
#include "Circle.h"

//defining the constructor for circle with inherited properties from area
Circle::Circle(const char *n, double a) : Area(n)
{
	radius = a;
}

//destructor for circle
Circle::~Circle()
{
}

//method to calculate the area
double Circle::calcArea() const
{
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

//method to calculate the perimeter
double Circle:: calcPerimeter() const
{
	std::cout << "Perimeter of Circle: ";
	return 2 * M_PI * radius;
}
