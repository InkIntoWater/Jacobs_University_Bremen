/*
CH-230-A
a11_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Shapes.h*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape           // base class
{                     
protected:            // private access modifier: could also be protected
    std::string name; // every shape will have a name
public:
    Shape(const std::string &); // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape &);       // copy constructor
    void printName() const;     // prints the name
};

class CenteredShape : public Shape    // inherits from Shape
{
protected:
    double x, y; // the center of the shape
public:
    // usual three constructors
    CenteredShape(const std::string &, double, double); 
    //empty constructor
    CenteredShape(); 
    //copy constructor
    CenteredShape(const CenteredShape &);
    void move(double, double); // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape    // inherits from CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
protected:
    int EdgesNumber; //property of a regualr polygon

public:
    //constructor for the RegularPolygon
    RegularPolygon(const std::string &, double, double, int);
    //constructor for the RegularPolygon that resembles with rectangle
    RegularPolygon(const std::string &, double, double);
    RegularPolygon();
    //copy costructor
    RegularPolygon(const RegularPolygon &);

    void setEdgesNumber(int);  //setter for edgenumber
    int getEdgesNumber();      //getter for the edgenumber
};

class Circle : public CenteredShape         // inherits from CenteredShape
{                          // a Circle is a shape with a center and a radius
private:
    double Radius;

public:
    //constructor for the circle
    Circle(const std::string &, double, double, double);
    //empty constructor
    Circle();
    //copy constructor
    Circle(const Circle &);

    double perimeter();  //method for calculating the perimeter
    double area();       //method for calculating the area

    void setRadius(double); //seter for radius 
    double getRadius();     //getter for radius
    void printName() const; //method for printing the name of the shape
};

class Rectangle : public RegularPolygon
{
private:
    //properties of the rectangle
    double length;
    double width;

public:
    //constructor for rectangle 
    Rectangle(const std::string &, double, double, double, double);
    //constructor for rectangle that resembles with square
    Rectangle(const std::string &, double, double, double);
    //empty constructor
    Rectangle();
    //copy constructor
    Rectangle(const Rectangle &);
    //destructor
    ~Rectangle();

    double perimeter();     //method for calculating the perimeter
    double area();          //method for calculating the area

    void setLength(double); //setter for length
    void setWidth(double);  //setter for width
    double getLength();     //getter for length
    double getWidth();      // getter for eidth
    void printName() const; //method for printing the name of the shape
};

class Square : public Rectangle
{
private:
    double length = 4;

public:
    //constructor for square
    Square(const std::string &, double, double, double);
    //empty constructor
    Square();
    //copy constructor
    Square(const Square &);
    //destructor
    ~Square();

    double perimeter();    //method for calculating the perimeter
    double area();         //method for calculating the area

    void setLength(double); //setter for the length of the side
    double getLength();     //getter for the length of the side
    void printName() const; //mehtod for printing the name of the shape
};

#endif