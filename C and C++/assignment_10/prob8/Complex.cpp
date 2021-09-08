/*
CH-230-A
a10_p8.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: complex.cpp*/

#include <iostream>
#include <cmath>                      //needed for sqrt
#include "Complex.h"

using namespace std;  // for cout

//for empty complex number/
Complex::Complex() 
{  // sets everything to 0
	real = imag = 0;
	//cout << "Constructor one is being called" << endl;
}

//for complex number having only the real part
Complex::Complex(float r)
{
	real = r;
	imag = 0;
}

//for complex number having both real and imaginary parts
Complex::Complex(float r, float i)
{
	real = r;
	imag = i;
}

//setting the value to the real part of the complex number
void Complex::setReal(float r)
{ 
	real = r;
}

//setting the value to the imaginary part of the complex number
void Complex::setImag(float i)
{ 
	imag = i;
}

//copy constructor
Complex::Complex(Complex & copy)
{
	real = copy.real;
	imag = copy.imag;
}

//for printing the output to the screen
void Complex::print()
{    
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}
}

//for the conjugation of the complex number
void Complex::conj()
{
	
	Complex c (real, (-1) * imag);
	c.print();
	
}

//for adding a complex number to another complex number
Complex Complex::add(Complex x)
{
	Complex temp;
	temp.real = real + x.real;
	temp.imag = imag + x.imag;
	return temp;
}

//for subtracting a complex number from a complex number
Complex Complex::subtr(Complex x)
{
	Complex temp;
	temp.real = real - x.real;
	temp.imag = imag - x.imag;
	return temp;
}

//for multiplying a complex number with another complex number
Complex Complex::mult(Complex x)
{
	Complex temp;
	temp.real = (real * x.real) - (imag * x.imag);
	temp.imag = (real * x.imag) + (imag * x.real);
	return temp;
}

//using the destructor
Complex::~Complex()
{}
