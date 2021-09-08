/*
CH-230-A
a12_p3.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: TournamentMember.h*/

#include <string>
#include <iostream>

using namespace std;

//declaring the class TournamentMember
class TournamentMember
{
    //declaring the protected properties of the TournamentMember
    //so that child class could also access them instead of private
protected:
    char fname[36];
    char lname[36];
    char dob[11];
    float height;
    static string location;

    //declaring the public properties of the TournamentMember
public:
    char teamname[36];
    TournamentMember();
    TournamentMember(const char[], const char[], const char[],
                     const char[], float);
    TournamentMember(const TournamentMember &);
    ~TournamentMember();
    void setFname(const char[36]);
    void setLname(const char[36]);
    void setDob(const char[11]);
    void setLocation(string);
    void setTeamname(const char[36]);
    void setHeight(float);
    char getFname();
    char getLname();
    char getDob();
    string getLocation();
    char getTeamname();
    float getHeight();
    void print();
};

//declaring the child class Player
class Player : public TournamentMember
{

//declaring the private properties of Player
private:
    int number;
    string position;
    int goals_scored;
    string footed;

//declaring the public properties of the Player
public:
    Player();
    Player(const char[], const char[], const char[], const char[], float,
           int, string, int, string);
    Player(const Player &);
    void setNumber(int);
    int getNumber();
    void setPosition(string);
    string getPosition();
    /*void setGoals_scored(int);
    int getGoals_scored();*/
    void setFooted(string);
    string getfooted();
    void print();
    int increase_goal(int);
    ~Player();
};
