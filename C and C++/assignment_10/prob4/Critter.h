/*
CH-230-A
a10_p4.cpp
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

public: //public methods of a Critter
	Critter ();                 
	Critter (std::string); 
    Critter (std::string, int, int, float=10); //default height set to 10

    //setter
    void sethunger(int hunger);

	void print();              // prints it to the screen
};

