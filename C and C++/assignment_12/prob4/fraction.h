/*
CH-230-A
a12_p4.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: fraction.h*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

using namespace std;

//declaring a Fraction class
class Fraction
{
//declaring the private properties of fraction
private:     // internal implementation is hidden
    int num; // numerator
    int den; // denominator

    int gcd(int a, int b); // calculates the gcd of a and b
    int lcm(int a, int b);

//declaring the public properties of Fraction
public:
    Fraction();             // empty constructor
    Fraction(int, int = 1); // constructor taking values for fractions and
                            // integers. Denominator by default is 1
    friend ostream& operator << (ostream&, Fraction&);
    friend istream& operator >> (istream&, Fraction&);
    Fraction operator*(Fraction &);
    Fraction operator/(Fraction &);
    
    /*void print();           // prints it to the screen
    void setNum(int);
    void setDen(int);
    int getNum();
    int getDen();*/
};

#endif /* FRACTION_H_ */