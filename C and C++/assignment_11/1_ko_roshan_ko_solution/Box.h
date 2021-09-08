/*
a11_p1.c
Box.h
Roshan Nepal
ro.nepal@jacobs-university.de
*/

#include<iostream>
class Box
{
	private:
		double height;
		double width;
		double depth;

	public:
		//setter methods
		void setHeight(double);
		void setWidth(double);
		void setDepth(double);

		//getter methods
		double getHeight() const;
		double getWidth() const;
		double getDepth() const;

		//empty contructor
		Box();

		//passing the parameters
		Box(double, double, double);

		//copy constructor
		Box(const Box&);
		
		//Volume calculation
		double Volume();

		//Destructor
		~Box();
};
