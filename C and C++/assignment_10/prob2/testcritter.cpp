/*
CH-230-A
a10_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testcritter.cpp*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	string color;
	double weight;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	
	//editing the testcritter.cpp to include the additional properties
	c.setHunger(hunger);
	cout << "Color: ";
	cin >> color;
	c.setColor(color);
	cout << "Weight: ";
	cin >> weight;
	c.setWeight(weight);


	cout << "You have created:" << endl;
	c.print();
        return 0;
}