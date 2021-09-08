/*
CH-230-A
a10_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: City.cpp*/

#include<iostream>
#include<string>
#include"City.h"

using namespace std;

//defining the class definitions of a city or Setters
void City::setName(string newname)
{
    name = newname;
}

void City::setNumofinhab(int newnumofinhab)
{
    numofinhab = newnumofinhab;
}

void City::setMayor(string& newmayor)
{
    mayor = newmayor;
}

void City::setArea(double newarea)
{
    area = newarea;
}

//print method
void City::print()
{
    cout << "City Name: " << name << "\n";
    cout << "Number of Inhabitants: " << numofinhab << "\n";
    cout << "Mayor: " << mayor << "\n";
    cout << "Area: " << area << " square km" << "\n";
}

//getters
int City::getNumofinhab()
{
    return numofinhab;
}

double City::getArea()
{
    return area;
}