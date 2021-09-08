/*
CH-230-A
a11_p1.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Box.h*/

#include <iostream>
using namespace std;

//Creting a class for Box
class Box
{
private:
    double length, width, height;

public:
    Box();
    Box(double, double, double);
    Box(const Box &);
    ~Box();

    //setters for length, width, and height
    void setLength(double);
    void setWidth(double);
    void setHeight(double);

    //getter for length, width and height
    double getLength();
    double getHeight();
    double getWidth();

    //method for volume
    double vol();
};