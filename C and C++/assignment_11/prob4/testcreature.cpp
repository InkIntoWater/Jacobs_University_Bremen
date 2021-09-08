/*
CH-230-A
a11_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: dyncreature.cpp*/

#include <iostream>
#include "Creature.h"
#include <string>

using namespace std;

/*main function for creating instances and calling the classes for the 
constructors of the classes declared in the other files*/
int main()
{
    //declaring a string word for taking the input
    string word;
    //using the while loop for the infinite loop for taking the input
    while (1)
    {
        cout << "\nEnter the word:\n";
        cin >> word;

        //quitting the program if 'quit' is entered as input 
        if (word == "quit") 
        {
            cout << "Exiting the program.\n";
            exit(1);
        }

        //calling the Wizard class if 'wizard' is entered as input 
        else if (word == "wizard")
        {
            cout << "Running a wizard.\n";
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
        }

        //calling the Birds class if 'object1' is entered as input 
        else if (word == "object1")
        {
            cout << "Calling object1.\n";
            Birds *b;
            b = new Birds;
            b->run();
            b->fly();
            delete b;
        }

        //calling the Gypsy class if 'object2' is entered as input 
        else if (word == "object2")
        {
            cout << "Running a wizard.\n";
            Gypsy *g;
            g = new Gypsy;
            g->run();
            g->roam();
            delete g;
        }
    }

    return 0;
}