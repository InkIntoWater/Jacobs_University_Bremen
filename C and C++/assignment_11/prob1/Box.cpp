/*
CH-230-A
a11_p1.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Box.cpp*/

#include<iostream>
#include "Box.h"

using namespace std;

Box::Box() {}

Box::Box(double l,double w,double h)
{
    length=l;
    width=w;
    height=h;
}

void Box::setLength(double l)
{
    length = l;
}

void Box::setWidth(double w)
{
    width = w;
}

void Box::setHeight(double h)
{
    height = h;
}

double Box::getLength()
{
    return length;
}

double Box::getWidth()
{
    return width;
}

double Box::getHeight()
{
    return height;
}

Box::Box(const Box& copy)
{
    length = copy.length;
    width = copy.width;
    height = copy.height;
    cout << "copy constructor being called" << endl;
}

double Box::vol()
{
    double volume = length * width * height;
    return (volume);
}
Box::~Box() {}

/*void Box::print()
{
    cout << "Volume: " << vol << endl;
}*/
