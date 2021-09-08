#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n)
{
    length = a;
    width = b;
}

Rectangle :: Rectangle (const char *n, double a):Area(n)
{
    length = a;
}

Rectangle::~Rectangle()
{
}

double Rectangle::calcArea() const
{
    std::cout << "calcArea of Rectangle...";
    return length * width;
}

double Rectangle:: calcPerimeter() const
{
    std::cout << "Perimeter of Rectangle: ";
    return 2 *(length + width);
}
