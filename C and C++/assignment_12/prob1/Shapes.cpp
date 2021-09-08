/*
CH-230-A
a12_p1.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Shapes.cpp*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>
#include <string>

using namespace std;

//empty constructor for shape
Shape::Shape()
{
}

//constructor for the name of the shape
Shape::Shape(const string &n) : name(n)
{
}

void Shape::printName() const
{
    cout << name << endl;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}

//empty constructor for the centeredshape
CenteredShape::CenteredShape()
{
    x = 0;
    y = 0;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny,
                                 int nl) : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const std::string&n, double nx, 
                            double ny):CenteredShape(n,nx,ny)
{
}

//empty constructor for the regularpolygon
RegularPolygon::RegularPolygon()
{
}

Circle::Circle(const string &n, double nx, double ny,
                 double r) : CenteredShape(n, nx, ny)
{
    Radius = r;
}

//default constructor for Hexagon class
Hexagon::Hexagon()
{
    side = 3;
    colour = "Yellow";
    EdgesNumber = 6;
}

//constructor for the hexagon class
Hexagon::Hexagon(const std::string &n, double nx, double ny,
                 double s, const std::string &c) : RegularPolygon(n, nx, ny)
{
    side = s;
    colour = c;
    EdgesNumber = 6;
}

//setter for the side of hexagon
void Hexagon::setSide(double s)
{
    side = s;
}

//getter for the size of hexagon
double Hexagon::getSide(double side)
{
    return side;
}

//setter for the colour of hexagon
void Hexagon::setColour(string c)
{
    colour = c;
}

//getter for the colour of hexagon
string Hexagon::getColour(string c)
{
    return c;
}

//defininf the method to calculate the perimeter of the hexagon
double Hexagon::perimeter()
{
    double p = (double)6 * side;
    return p;
}

//defining the method to calculate the area of the hexagon
double Hexagon::area()
{
    double a = (double)((3 * sqrt(3)) / 2) * (side * side);
    return a;
}

//copy constructor for hexagon
Hexagon::Hexagon(const Hexagon &copy)
{
    side = copy.side;
    cout << "Copy Constructor called" << endl;
}
//destructor for hexagon
Hexagon::~Hexagon()
{
}