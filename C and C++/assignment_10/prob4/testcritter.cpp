/*
CH-230-A
a10_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testcritter.cpp*/

#include<iostream>
#include"Critter.h"

using namespace std;

int main()
{
    //for instance c1:
    Critter c1;
    c1.print();
    cout << "\n";

    //for instance c2:
    Critter c2("Suraj");
    c2.print();
    cout << "\n";

    //for instance c3:
    Critter c3("Suraj", 12, 9, 5.5);
    c3.print();
    cout << "\n";

    //for instance c4:
    Critter c4("Suraj", 12, 9);
    c4.print();
    cout << "\n";
    
    //changing or setting hunger to 2
    cout << "After setting the hunger to 2: \n";
    c1.sethunger(2);
    c2.sethunger(2);
    c3.sethunger(2);
    c4.sethunger(2);
    c1.print();
    cout << "\n";
    c2.print();
    cout << "\n";
    c3.print();
    cout << "\n";
    c4.print();
    
    return 0;
}