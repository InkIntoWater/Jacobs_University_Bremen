/*
CH-230-A
a10_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Critter.cpp*/

#include<iostream>
#include<string>
#include"Critter.h"

using namespace std;

//defining the class definitions or methods of a critter
//critter with no input arguments and other fixed args
Critter::Critter()
{
    name = "default_name";
    height = 5;
    hunger = 0;
    boredom = 0;
    cout << "Default Constructor" << endl;
}

//critter with only name argument and other fixed args.
Critter::Critter(std::string newname)
{
    name = newname;
    height = 5;
    hunger = 0;
    boredom = 0;
    cout << "Constructor with name" << endl;
}

//critter with all the provided arguments.
Critter::Critter(std::string newName, int hu, int b, float h)
{
    name = newName;
    hunger = hu;
    boredom = b;
    height = h;
    cout << "Constructor with all the arguments" << endl;
}

/*defining the setter for hunger and converting that to double and 
then back to integer internally*/
void Critter::sethunger(int newhunger)
{
    hunger = newhunger;
    hunger = (double)hunger / 10;
    hunger = (int) (hunger *10);
}

//defining the print function/ print method
void Critter::print()
{
    cout << "Name: " << name << "\nHeight: " << height << "\nHunger: " 
         << hunger << "\nBoredom: " << boredom << endl;
}

