/*
CH-230-A
a12_p7.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*Square.cpp*/

#include <iostream>
#include "Square.h"

//Defining construcotr for Square class inherited form Rectangle class
Square::Square(const char *n, double a) : Rectangle(n, a)
{
    length = a;
}

//Defining desctructor for Square class
Square::~Square()
{
}

//method to calculate the area of square
double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return length * length;
}

//method to calculate the perimeter of square
double Square:: calcPerimeter() const
{
    std::cout << "Perimeter of Square: ";
    return 4 *length;
}
