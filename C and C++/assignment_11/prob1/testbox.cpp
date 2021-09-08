/*
CH-230-A
a11_p1.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testbox.cpp*/

#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
    int n;
    double length;
    double width;
    double height;
    cout << "Enter value for n: ";
    cin >> n;
    Box *array;
    array = new Box [2*n];

    for (int i = 0; i < n; i++)
    {
        cout << "Length: ";
        cin >> length;
        array[i].setLength(length);
        cout << "Width: ";
        cin >> width;
        array[i].setWidth(width);
        cout << "Height: ";
        cin >> height;
        array[i].setHeight(height);
        array[i+n] = Box(array[i]);
    }

    /*for (int i = n; i < 2*n; i++)
    {
        array[i] = Box(array[i-n]);
    }*/

    for (int i = 0; i < 2*n; i++)
    {
        cout << "Volume of box" << i+1 << ":";
        cout << array[i].vol() << endl;
    }
    delete [] array; 
    return 0;
}