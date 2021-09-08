/*
CH-230-A
a12_p6.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*Area.h*/

#ifndef _AREA_H
#define _AREA_H

//Declaring area class
class Area
{
	//public properties ofAarea
public:
	Area(const char *n);
	virtual ~Area();
	void getColor() const;
	virtual double calcArea() const = 0;
	virtual double calcPerimeter() const = 0;

//private properties of Area
private:
	char color[11];
};
#endif
