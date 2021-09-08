/*
CH-230-A
a12_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testTournamentMember.cpp*/

#include<iostream>
#include"TournamentMember.h"
#include<string>

using namespace std;

int main()
{
    //Creating an instance of TournamentMember
    cout << endl;
    TournamentMember a("Suraj", "Giri", "1999-12-26", 
                      "NepaliHaru", 5.5);
    a.print(); //printing the output before changing the location
    cout << endl;
    
    //changing the static location of TournamentMember
    a.setLocation("Amsterdam");
    a.getLocation();
    a.print();  //printing the output after changing the location
    cout << "Team Location is changed" << endl;

    return 0;
}
