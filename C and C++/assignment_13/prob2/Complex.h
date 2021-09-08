/*
CH-230-A
a13_p2.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: complex.h*/
#include<iostream>
#include<cmath>

using namespace std;

class Complex {

private:  // internal implementation is hidden
	double real;  // real part
	double imag;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(float);    //constructor if there exists only real part
	Complex (float, float); //constructor for both real and imaginary parts
	Complex (Complex &copy); //copy constructor
	~Complex(); //empty destructor

//Operator overloading for +, -, *, =, <<, >> as asked in question
	Complex operator+(Complex &);
	Complex operator-(Complex &);
    Complex operator*(Complex &);
    Complex & operator=(const Complex &);
	friend ostream& operator << (ostream&, Complex&);
    friend istream& operator >> (istream&, Complex&);

	void setReal(double); //setter for real part.
	void setImag(double); //setter for imaginary part.
	void conj(); //function for conjugation of complex number.
	double getReal(); //getter for real part
	double getImag(); //getter for imaginary part

	void print();         // function for printing output to the screen.

};




//	Complex add(Complex);  /*function for additing complex numbers
//							 to another complex number*/
//    Complex subtr(Complex); /*function for subtracting a complex number 
// 							 from another complex number*/
//    Complex mult(Complex); /*function for multiplying a complex number 
// 							 to another complex number*/

