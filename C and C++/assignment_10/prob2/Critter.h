/*
CH-230-A
a10_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: critter.h*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	std::string color;
	double weight;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setColor(std::string newcolor); //new property color
	void setWeight(double newweight); //new property weight
	// getter method
	int getHunger();
	char getColor();
	double getWeight();
	// service method
	void print();
};
