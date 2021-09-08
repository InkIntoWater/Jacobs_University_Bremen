/*
CH-230-A
a13_p8.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
#include <stdexcept>

using namespace std;

//declaring the class Motor that is in Car
class Motor
{
public:
    Motor()
    {
        throw "Damaged \n";
    }
};

//declaring the class Car that is in Garage
class Car
{
public:
    Motor m;

    Car() : m() {}
};

//declaring the class Garage
class Garage
{
public:
    Garage()
    {
        try
        {
            Car c;
            throw("The car in this garage has problems with the motor");
        }
        catch (const char *e)
        {
            cout << e;
            throw "This motor has problems";
        }
    }
};

//checking in the garage class that is having problems with its motor
int main()
{
    try
    {
        Garage g1;
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    return 0;
}
