/*
CH-230-A
a12_p1.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testHexagon.cpp*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{
    Hexagon a ("first Hexagon", 1, 1, 9, "blue");
    Hexagon b("second Hexagon", 2, 2, 15, "green");
    Hexagon cop(b);
    cout<<"The perimeters are:"<<endl;
    cout<<a.perimeter()<<endl;
    cout<<b.perimeter()<<endl;
    cout<<cop.perimeter()<<endl;
    cout<<"The areas are:"<<endl;
    cout<<a.area()<<endl;
    cout<<b.area()<<endl;
    cout<<cop.area()<<endl;
    return 0;
}