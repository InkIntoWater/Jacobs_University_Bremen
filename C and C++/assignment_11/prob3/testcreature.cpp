/*
CH-230-A
a11_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testcreature.cpp*/

#include <iostream>
#include "Creature.h"

using namespace std;

/*main function for creating instances and calling the classes for the 
constructors of the classes declared in the other files*/
int main()
{
    //instance for creature
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //instance for wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //instance for bird
    cout << "\nCreating a Bird. \n";
    Birds b;
    b.run();
    b.fly();

    //instance for gypsy
    cout << "\nCreating a Gypsy.\n";
    Gypsy g;
    g.run();
    g.roam();

    //instance for wizard
    cout << "\nCreating an instance of wizard.\n";
    Wizard wi;
    wi.run();
    wi.hover();

    //instance for birds
    cout << "\nCreating an instance of a Brid.\n";
    Birds bi;
    bi.run();
    bi.fly();

    //instance for gypsy
    cout << "\nCreating an instance of a Gypsy.\n";
    Gypsy gy;
    gy.run();
    gy.roam();

    return 0;
}