/*
CH-230-A
a13_p1.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    string firstfile;
    string secondfile;
    ifstream f1;
    ofstream f2;

    cout << "Enter the name of the file to be copied: " << endl;

    cin >> firstfile;
    f1.open(firstfile);

    int position;
    position = firstfile.find(".");
    secondfile = firstfile.insert(position, "_copy");
    f2.open(secondfile);
    char copy[30];
    while (f1.eof() == 0)
    {
        f1.getline(copy, 30);
        f2 << copy << endl;
    }
    cout << "Done" << endl;
    f1.close();
    f2.close();

    return 0;
}