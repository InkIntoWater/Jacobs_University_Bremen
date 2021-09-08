/*
CH-230-A
a12_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: TournamentMember.cpp*/

#include<iostream>
#include"TournamentMember.h"
#include<string>
#include<cstring>

using namespace std;

//Defining Empty constructor of TournamentMember Class
TournamentMember::TournamentMember()
{
    cout << "Empty constructor called" << endl;
}

//Defining Empty constructor of TournamentMember Class
TournamentMember::TournamentMember(const char fn[36], const char ln[36], const char db[11], 
                             const char tn[36], float h)
{
    strcpy(fname, fn);
    strcpy(lname, ln);
    strcpy(dob, db);
    height = h;
    strcpy(teamname, tn);  
    cout << "Parametric constructor being called" << endl;
}

//Defining copy constructor of TournamentMember Class
TournamentMember::TournamentMember(const TournamentMember &copy)
{
    strcpy(fname, copy.fname);
    strcpy(lname, copy.lname);
    strcpy(dob, copy.dob);
    height = copy.height;
    strcpy(teamname, copy.teamname);
    cout << "Copy constructor called" << endl;
}

//Defining Destructor of TournamentMember Class
TournamentMember::~TournamentMember()
{
    cout << "Destructor being called" << endl;
}

/*void TournamentMember::setFname(const char fn[36])
{
    strcpy(fname, fn);
}*/

char TournamentMember::getFname()
{
    return fname[36];
}

void TournamentMember::setLname(const char ln[36])
{
    strcpy(lname, ln);
}

char TournamentMember::getLname()
{
    return lname[36];
}

void TournamentMember::setDob(const char db[11])
{
    strcpy(dob, db);
}

char TournamentMember::getDob()
{
    return dob[11];
}

string TournamentMember::location= "Bremen";

void TournamentMember::setLocation(string loc)
{
    location = loc;
}

string TournamentMember::getLocation()
{
    return location;
}

void TournamentMember::setTeamname(const char tn[36])
{
    strcpy(teamname,tn);
}

char TournamentMember::getTeamname()
{
    return teamname[36];
}

void TournamentMember::setHeight(float h)
{
    height = h;
}

float TournamentMember::getHeight()
{
    return height;
}


//declaring the print method
void TournamentMember::print()
{
    cout << "Frist Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Location: " << location << endl;
    cout << "Teamname: " << teamname << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Print Method Executed" << endl;
}