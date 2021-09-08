/*
CH-230-A
a10_p6.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Critter.h*/

#include <string>

class Critter {

private:  // internal implementation is hidden
	std::string name;
    float height;
    int hunger;
    int boredom;
    double thirst;

public:
	Critter ();                 
	Critter (std::string); 
    Critter (std::string, int, int, float=10); //setting default height to 10
    Critter (std::string, int, int, float, double);
    void sethunger(float hunger);
    void setthirst(double thirst);

	void print();              // prints it to the screen
};
