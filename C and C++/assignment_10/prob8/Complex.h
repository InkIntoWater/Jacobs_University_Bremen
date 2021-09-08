/*
CH-230-A
a10_p8.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: complex.h*/

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

	void setReal(float); //setter for real part.
	void setImag(float); //setter for imaginary part.
	void conj(); //function for conjugation of complex number.
	Complex add(Complex);  /*function for additing complex numbers
							 to another complex number*/
    Complex subtr(Complex); /*function for subtracting a complex number 
							 from another complex number*/
    Complex mult(Complex); /*function for multiplying a complex number 
							 to another complex number*/

	void print();         // function for printing output to the screen.

};