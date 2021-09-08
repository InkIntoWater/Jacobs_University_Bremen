/*
CH-230-A
a12_p2.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: TournamentMember.h*/

#include<string>
#include<iostream>

using namespace std;

//declaring TournamentMember Class
class TournamentMember
{
    //declarin private properties of TournamentMember
    private:
        char fname[36];
        char lname[36];
        char dob[11];
        float height;
        static string location; 

    //declaring public properties of TournamentMember
    public:
        char teamname[36];
        TournamentMember();
        TournamentMember(const char fname[], const char lname[], const char dob[], const char teamname[], float height);
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