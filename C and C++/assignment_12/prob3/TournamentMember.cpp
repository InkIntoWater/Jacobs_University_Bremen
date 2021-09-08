/*
CH-230-A
a12_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: TournamentMember.cpp*/

#include<iostream>
#include"TournamentMember.h"
#include<string>
#include<cstring>

using namespace std;

//defining the default constructor for TournamentMember
TournamentMember::TournamentMember()
{
    cout << "Empty constructor called" << endl;
}

//defining the Parametric constructor for TournamentMember
TournamentMember::TournamentMember(const char fn[36], const char ln[36], 
                                    const char db[11], const char tn[36], 
                                    float h)
{
    strcpy(fname, fn);
    strcpy(lname, ln);
    strcpy(dob, db);
    height = h;
    strcpy(teamname, tn);  
    cout << "Parametric constructor being called" << endl;
}

//defining the copy constructor for TournamentMember
TournamentMember::TournamentMember(const TournamentMember &copy)
{
    strcpy(fname, copy.fname);
    strcpy(lname, copy.lname);
    strcpy(dob, copy.dob);
    height = copy.height;
    strcpy(teamname, copy.teamname);
    cout << "Copy constructor called" << endl;
}

//defining the destructor for TournamentMember
TournamentMember::~TournamentMember()
{
    cout << "Destructor being called" << endl;
}


void TournamentMember::setFname(const char fn[36])
{
    strcpy(fname, fn);
}

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

//defining the print method
void TournamentMember::print()
{
    cout << "First Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Location: " << location << endl;
    cout << "Teamname: " << teamname << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Print Method Executed" << endl;
}

//defining the default constructor for Player
Player::Player()
{
    cout << "Default constructor for Player being called" << endl;
}

//defining the Parametric constructor for Player
Player::Player(const char fn[36], const char ln[36], const char db[11], 
                const char tn[36], float h, int n, string po, int gn, 
                string ftd) : TournamentMember(fn, ln, db, tn, h)
{
    number = n;
    position = po;
    goals_scored = gn;
    footed = ftd;
    cout << "Parametric Constructor being called." << endl;
}

Player::Player(const Player & copy)
{
    number = copy.number;
    position = copy.position;
    goals_scored = copy.goals_scored;
    footed = copy.footed;
    cout << "Copy constructor being called" << endl;
}

Player::~Player()
{}

void Player::setNumber(int n)
{
    number = n;
}

int Player::getNumber()
{
    return number;
}

void Player::setPosition(string po)
{
    position = po;
}

string Player::getPosition()
{
    return position;
}

/*void setGoals_scored(int);
int getGoals_scored();*/
void Player::setFooted(string ftd)
{
    footed = ftd;
}
string Player::getfooted()
{
    return footed;
}

void Player::print()
{
    cout << "Frist Name: " << fname << endl;
    cout << "Last Name: " << lname << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Location: " << location << endl;
    cout << "Teamname: " << teamname << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Goals Scored: " << goals_scored << endl;
    cout << "Left / Right footed: " << footed << endl;
    cout << "Print Method Executed" << endl;
}

int Player::increase_goal(int n)
{
    goals_scored = goals_scored + n;
    return goals_scored;
}