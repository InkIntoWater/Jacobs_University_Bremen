/*
CH-230-A
a12_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testfraction.cpp*/

#include <iostream>
#include "fraction.h"

//using namespace std;

int main(void)
{
    //creating the instances of fractions
    Fraction a; 
    Fraction b; 
    Fraction prod; 
    Fraction div;
    Fraction sum;
    Fraction diff;
    bool greater;
    bool smaller;

//performing the operations using overloaded operators
    cin >> a;
    cin >> b;
    prod = a * b;
    div = a / b;
    sum = a + b;
    diff = a - b;

//printing the outputs on the screen
    cout << "\nOutputs: " << endl;
    cout << "First Fraction: " << a << endl;
    cout << "Second fraction: "<< b << endl;
    cout << "Multiplication of fractions: "<< prod << endl;
    cout << "Division of fractions: "<< div << endl;
    cout << "Sum of fractions: "<< sum << endl;
    cout << "Difference of fractions: "<< diff << endl;

    //if a > b, returning a as greater fraction
    greater = a > b;
    if (greater == true)
    {
        cout << "Greater fraction: " << a << endl;
    }
    else
    {
        cout << "Greater fraction: " << b << endl;
    }
    
    //if b > a, returning a as smaller fraction
    smaller = a < b;
    if (smaller == true)
    {
        cout << "Smaller fraction: " << a << endl;
    }
    else
    {
        cout << "Smaller fraction: " << b << endl;
    }

    return 0;   
}