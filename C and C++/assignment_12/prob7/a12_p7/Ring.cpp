/*
CH-230-A
a12_p7.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*Ring.cpp*/

#include <iostream>
#include <cmath>
#include "Ring.h"

//Declaring constructor for the Ring class derived from Circle class
Ring::Ring(const char *n, double outer, double inner)
	: Circle(n, outer)
{
	innerradius = inner;
}

//Declaring destructor for the Ring class 
Ring::~Ring()
{
}

//method to calculate the Area of Ring
double Ring::calcArea() const
{
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea() -
			(innerradius * innerradius * M_PI));
}

//method to calculate the perimeter of Ring
double Ring:: calcPerimeter() const
{
	std::cout << "Perimeter of Ring: ";
	return(Circle::calcPerimeter() +
			(2 * M_PI * innerradius));
}
