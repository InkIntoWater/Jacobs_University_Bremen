/*
CH-230-A
a12_p5.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: fraction.h*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

using namespace std;

class Fraction
{
//declaring the private properties
private:     // internal implementation is hidden
    int num; // numerator
    int den; // denominator

    int gcd(int a, int b); // calculates the gcd of a and b
    int lcm(int a, int b);

//declaring the public properties
public:
    Fraction();             // empty constructor
    Fraction(int, int = 1); // constructor taking values for fractions and
                            // integers. Denominator by default is 1
    
    //declaring the operator overloading for << and >>
    friend ostream& operator << (ostream&, Fraction&);
    friend istream& operator >> (istream&, Fraction&);

    //declaring the operator overloading for * / + - = < and >
    Fraction operator*(Fraction &);
    Fraction operator/(Fraction &);
    Fraction operator+(Fraction &);
    Fraction operator-(Fraction &);
    Fraction & operator=(const Fraction &);
    bool operator<(Fraction &);
    bool operator>(Fraction &);

};

#endif /* FRACTION_H_ */