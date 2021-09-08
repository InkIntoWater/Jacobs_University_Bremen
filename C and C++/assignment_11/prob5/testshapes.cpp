/*
CH-230-A
a11_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testshapes.cpp*/

#include<iostream>
#include "Shapes.h"

using namespace std;

int main(int argc, char **argv)
{
    //creating the instance of circle
    Circle c("first circle", 3, 4, 7);
    //RegularPolygon r("TRIANGLE", 1, 1, 3);

    //creating the instance of rectangle
    Rectangle R ("first rectangle", 5,6, 4, 5);

    //creating the instance of square
    Square s("first square", 6,6, 3);

    //r.printName();
    //printing the name of the shape of circle
    c.printName();
    //printing the perimeter of the circle
    cout << "perimeter of circle: " << c.perimeter() << endl;
    //printing the area of circle
    cout << "area of circle: " << c.area() << endl;
    cout << "\n";

    //printing the name of the shape of rectangle
    R.printName();
    //printing the perimeter of the rectangle
    cout << "perimemter of rectangle: " << R.perimeter() << endl;
    //printing the area of rectangle
    cout << "area of circle: " << R.area() << endl;
    cout << "\n";

    //printing the name of the shape of square
    s.printName();
    //printing the perimeter of the square
    cout << "Perimeter of Square: " << s.perimeter() << endl;
    //printing the area of square
    cout << "area of circle: " << s.area() << endl;
    cout << "\n";

    return 0;    
}