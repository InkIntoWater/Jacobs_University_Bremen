/*
CH-230-A
a12_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: fraction.cpp*/

#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;

    // Implement GCD of two numbers;

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

//operator overloading for <<
ostream& operator << (ostream& out, Fraction& f)
{
    out << f.num << "/" << f.den;
    return out;
}

//operator overloading for >>
istream& operator >> (istream& in, Fraction& f)
{
    /*char s;
    cout << "Enter fraction (num/den): " << endl;
    in >> f.num >> s >> f.den;
    while (f.den == 0)
        {
            cout << "Reenter Input" << endl;
            in >> f.num >> s >> f.den;
        }*/
    char s = '\0';
    while (s != '/')
    {
        cout << "Enter the fraction: " << endl;
        in >> f.num >> s >> f.den; 
        while (f.den == 0)
        {
            cout << "Re-enter Input" << endl;
            in >> f.num >> s >> f.den;
        }     
    }
    return in;
}

//operator overloading for *
Fraction Fraction :: operator*(Fraction & a)
{
    Fraction temp;
    temp.num = num * a.num;
    temp.den = den * a.den;
    return temp;
}

//operator overloading for /
Fraction Fraction :: operator/(Fraction & a)
{
    Fraction temp;
    temp.num = num * a.den;
    temp.den = den * a.num;
    return temp;
}

