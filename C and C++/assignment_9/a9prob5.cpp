/*
CH-230-A
a9_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //getting the name of the player
    string s;
    cout << "Enter your name: ";
    cin >> s;

    //generating the random number
    int randomnumber;
    srand(static_cast<unsigned int>(time(0)));
    randomnumber = rand();

    //making the random number to fall inside the range of 1 and 100
    int die= (randomnumber%100)+1;
    int guessednumber=0;
    int tries = 0;

    /*using while loop to enter the number unless it is equal to the 
        random number*/
    while (guessednumber != die)
    {
        cin >> guessednumber;
        tries++;
        if (guessednumber < die)
        {
            cout << "Lower than the number" << endl;
        }
        else if (guessednumber > die)
        {
            cout << "Higher than the number" << endl;
        }
        else
            cout << "Hurray!!! " << s << ", You won!!!" << endl;
    }
    return 0;
}