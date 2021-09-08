/*
CH-230-A
a10_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

/*file: critter.cpp*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{
	hunger = newhunger;
}

void Critter::setColor(string newcolor)
{
	color = newcolor;
}

void Critter::setWeight(double newweight)
{
	weight = newweight;
}

void Critter::print() 
{
	cout << "I am " << name << ". My hunger level is " << hunger << 
		"." << endl;
	cout << "My color is " << color << ". My weight is " << weight <<
		" units." << endl;
}

int Critter::getHunger() 
{
	return hunger;
}

double Critter::getWeight()
{
	return weight;
}