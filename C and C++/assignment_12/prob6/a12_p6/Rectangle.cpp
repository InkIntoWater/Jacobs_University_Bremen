/*
CH-230-A
a12_p6.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*Rectangle.cpp*/

#include <iostream>
#include "Rectangle.h"

//defining constructor for the rectangle class inherited for area class
Rectangle::Rectangle(const char *n, double a, double b) : Area(n)
{
    length = a;
    width = b;
}

/*defining constructor for the rectangle class similar to square 
inherited for area class*/
Rectangle :: Rectangle (const char *n, double a):Area(n)
{
    length = a;
    width = a;
}

//destructor for the rectangle class
Rectangle::~Rectangle()
{
}

//method to calculate the area
double Rectangle::calcArea() const
{
    std::cout << "calcArea of Rectangle...";
    return length * width;
}

//method to calculate the perimeter
double Rectangle:: calcPerimeter() const
{
    std::cout << "Perimeter of Rectangle: ";
    return 2 *(length + width);
}
