/*
CH-230-A
a10_p8.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testcomplex.cpp*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main() 
{
	//setting the real and imaginary parts of two complex numbers
	float realA;
    float imagA;
    float realB;
    float imagB;

/*feeding the input from keyboard for the real and imaginary parts 
of the complex numbers*/
	cout << "Real part of first complex number: \n";
    cin >> realA;
	cout << "Imaginary part of first complex number: \n";
	cin >> imagA;
	cout << "Real part of second complex number: \n";
	cin >> realB;
	cout << "Imaginary part of first complex number: \n";
	cin >> imagB;

/*using the setters for setting the real and imaginary parts 
of the first complex number. */
	Complex a;
	a.setReal(realA);
	a.setImag(imagA);

/*using the setters for setting the real and imaginary parts 
of the first complex number. */
	Complex b;
	b.setReal(realB);
	b.setImag(imagB);

/*setting a third class for the complex number to store the 
arithmetics carried out between the above two complex numbers.*/
	Complex c;

	cout << "\n" << "Outputs: \n";

	cout << "Conjugate of first complex number: \n";
	a.conj();

	c = a.add(b); //storing the addition into the third complex number
	cout << "Sum of two complex numbers: \n";
	c.print(); //printing the addition

	c=a.subtr(b); //storing the subtraction into the third complex number
	cout << "Difference of two complex numbers: \n";
	c.print(); //printing the subtraction

	c=a.mult(b); //storing the multiplication into the third complex number
	cout << "Multiplication of two complex numbers: \n";
	c.print(); //printing the multiplication

    return 0;
}