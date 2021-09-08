/*
CH-230-A
a10_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Critter.h*/

#include <string>

class Critter {

private:  // internal implementation is hidden
	std::string name;
    float height;
    int boredom;
    double hunger;
    //double hungerd (int hunger);
    //int backtointegers(double hunger);

public:
	Critter ();                 
	Critter (std::string); 
    Critter (std::string, int, int, float=10);
    void sethunger(int newhunger);

	void print();              // prints it to the screen
};

