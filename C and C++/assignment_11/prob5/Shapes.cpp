/*
CH-230-A
a11_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Shapes.cpp*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std;

//empty constructor for class shape
Shape::Shape()
{
}

//empty constructor for the name of the class shape
Shape::Shape(const string &n) : name(n)
{
}

//declating method for printing the name of the shape 
void Shape::printName() const
{
    cout << name << endl;
}

/*constructor for the derived tclass centeredshape that was derived from the 
parent class Shape*/
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}

//default constructor pointing to the default center of of the centered shape 
CenteredShape::CenteredShape()
{
    x = 0;
    y = 0;
}

//defining the empty constructor for the class RegularPolygon
RegularPolygon::RegularPolygon()
{
}

/*defining the empty constructor for the class RegularPolygon that is derived
from CenteredShape*/
RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl)
     : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

/*defining the empty constructor for the class RegularPolygon that is derived
from CenteredShape that resembles the rectangle*/
RegularPolygon::RegularPolygon(const string &n, double nx, double ny)
     : CenteredShape(n, nx, ny)
{
}

//defining the empty constructor for the circle and assigning the radius to 1.1
Circle::Circle()
{
    Radius = 1.1;
}

/*defining the empty constructor for the class Circle that is derived
from CenteredShape*/
Circle::Circle(const string &n, double nx, double ny, double r)
     : CenteredShape(n, nx, ny)
{
    Radius = r;
}

//defining the setter for the radius of circle
void Circle::setRadius(double r)
{
    Radius = r;
}

//defining the getter for the radius of circle
double Circle::getRadius()
{
    return Radius;
}

//defining the method for calculating the perimeter of the circle
double Circle::perimeter()
{
    double p = (double)2 * M_PI * Radius;
    return p;
}

//defining the method for calculating the area of the circle
double Circle::area()
{
    double a = M_PI * Radius * Radius;
    return a;
}

//defining the method for printing the shape and centre of the circle
void Circle::printName() const
{
    cout << name << endl; ///do similar on rectangle and
    cout << "Centre: "
         << "(" << x << "," << y << ")" << endl;
}

//defining the copy constructor for class circle
Circle::Circle(const Circle &copy)
{
    Radius = copy.Radius;
    cout << "Calling copy constructor for circle.";
}

//defining the empty constructor for rectangle
Rectangle::Rectangle()
{
    length = 3;
    width = 2;
}

/*defining the constructor for the class REctangle that is derived
from RegularPolygon*/
Rectangle::Rectangle(const string &n, double nx, double ny, 
    double nwidth, double nheight) : RegularPolygon(n, nx, ny)
{
    length = nwidth;
    width = nheight;
}

/*defining the constructor for the class REctangle that is derived
from RegularPolygon that would resemble the square*/
Rectangle::Rectangle(const string &n, double nx, double ny, double nwidth)
     : RegularPolygon(n, nx, ny)
{
    length = nwidth;
}

//defining the setter to set the length of rectangle
void Rectangle::setLength(double nwidth)
{
    length = nwidth;
}

//defining the getter to get the length of a rectangle
double Rectangle::getLength()
{
    return length;
}

//defining the setter to set the width of rectangle
void Rectangle::setWidth(double nheight)
{
    width = nheight;
}

//defining the getter to set the width of rectangle
double Rectangle::getWidth()
{
    return width;
}

//defining the copy constructor fot the rectangle
Rectangle::Rectangle(const Rectangle &copy)
{
    length = copy.length;
    width = copy.width;
    cout << "Calling copy constructor for rectangle.";
}

//defining the method to print the shape and the centre of the rectangle
void Rectangle::printName() const
{
    cout << name << endl; ///do similar on rectangle and
    cout << "Centre: "
         << "(" << x << "," << y << ")" << endl;
}

//defining the method to calculate the perimether of the rectangle
double Rectangle::perimeter()
{
    double p = (double)2 * (length + width);
    return p;
}

//defining the method to calculate the area of the rectangle
double Rectangle::area()
{
    double a = length * width;
    return a;
}

//defining the destructor fot the rectangle
Rectangle::~Rectangle()
{
}

//defining the empty constructor for the class Square
Square::Square()
{
    length = 2.5;
}

/*defining the constructor for the class Square that is derived
from Rectangle*/
Square::Square(const string &n, double nx, double ny, double nside)
     : Rectangle(n, nx, ny, nside)
{
    length = nside;
}

//defining the setter to set the length of theside of square
void Square::setLength(double nside)
{
    length = nside;
}

//defining the getter to get the length of the side of square
double Square::getLength()
{
    return length;
}

//copy constructor for the square
Square::Square(const Square &copy)
{
    length = copy.length;
    cout << "Calling copy constructor for square.";
}

//defining the method to print the shape and the centre of the square
void Square::printName() const
{
    cout << name << endl; ///do similar on rectangle and
    cout << "Centre: "
         << "(" << x << "," << y << ")" << endl;
}

//defining the method to calculate the perimeter of the square
double Square::perimeter()
{
    double p = (double)4 * length;
    return p;
}

//defining the method to calculate the area of the square
double Square::area()
{
    double a = length * length;
    return a;
}

//defining the destructor for the square
Square::~Square()
{
}