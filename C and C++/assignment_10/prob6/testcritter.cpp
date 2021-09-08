/*
CH-230-A
a10_p6.cpp
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
    Critter c3("Suraj", 8, 9, 5.5);
    c3.print();
    cout << "\n";

    //for instance c4:
    Critter c4("Suraj", 8, 9);
    c4.print();
    cout << "\n";

    //for instance c5:
    Critter c5("Suraj", 8, 9, 5.5, 5);
    c5.print();
    cout << "\n";
    
    return 0;
}