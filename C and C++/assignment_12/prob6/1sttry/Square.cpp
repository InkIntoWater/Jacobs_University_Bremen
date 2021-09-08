#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) : Rectangle(n, a)
{
    length = a;
}

Square::~Square()
{
}

double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return length * length;
}

double Square:: calcPerimeter() const
{
    std::cout << "Perimeter of Square: ";
    return 4 *length;
}
