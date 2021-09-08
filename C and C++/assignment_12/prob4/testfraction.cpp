/*
CH-230-A
a12_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testfraction.cpp*/

#include <iostream>
#include "fraction.h"

//using namespace std;

int main(void)
{
    //Creating the instances of fraction
    Fraction a; 
    Fraction b; 
    Fraction c; 
    Fraction d;

    //taking input for fraction a and b
    cin >> a;
    cin >> b;

    //performing operations using overloaded operators
    c = a * b;
    d = a / b;

    //printing the outputs
    cout << "\nOutputs: " << endl;
    cout << "First Fraction: " << a << endl;
    cout << "Second fraction: "<< b << endl;
    cout << "Multiplication of fractions: "<< c << endl;
    cout << "Division of fractions: "<< d << endl;

}