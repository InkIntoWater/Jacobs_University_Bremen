/*
CH-230-A
a10_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: testcity.cpp*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
//For Instance Bremen of the class City.
    City Bremen;
   
    cout << "For Bremen\n";
    cout << "City Name: ";
    string nameB;
    cin >> nameB;
    Bremen.setName(nameB);

    cout << "Number of inhabitants: ";
    int numbofinhabB;
    cin >> numbofinhabB;
    Bremen.setNumofinhab(numbofinhabB);
    getchar();

    cout << "Mayor: ";
    string mayorB;
    getline(cin, mayorB);
    Bremen.setMayor(mayorB);

    cout << "Area: ";
    double areaB;
    cin >> areaB;
    Bremen.setArea(areaB);
    //Bremen.print();
    cout << "\n";

//For Instance Paris of the class City.
    City Paris;

    cout << "For Paris \n";
    cout << "City Name: ";
    string nameP;
    cin >> nameP;
    Paris.setName(nameP);
    cout << "Number of inhabitants: ";
    int numbofinhabP;
    cin >> numbofinhabP;
    Paris.setNumofinhab(numbofinhabP);
    getchar();
    cout << "Mayor: ";
    string mayorP;
    getline(cin, mayorP);
    Paris.setMayor(mayorP);
    cout << "Area: ";
    double areaP;
    cin >> areaP;
    Paris.setArea(areaP);
    cout << "\n";

//For Instance London of the class City.
    City London;
    
    cout << "For London \n";
    cout << "City Name: ";
    string nameL;
    cin >> nameL;
    London.setName(nameL);
    cout << "Number of inhabitants: ";
    int numbofinhabL;
    cin >> numbofinhabL;
    London.setNumofinhab(numbofinhabL);
    getchar();
    cout << "Mayor: ";
    string mayorL;
    getline(cin, mayorL);
    London.setMayor(mayorL);
    London.setMayor(mayorL);
    cout << "Area: ";
    double areaL;
    cin >> areaL;
    London.setArea(areaL);
    cout << "\n";

//printing the instances of the City class.
    cout << "Outputs: \n";    
    Bremen.print();
    cout << "\n";
    Paris.print();
    cout << "\n";
    London.print();

    cout << "Done" << endl;
    return 0;
}