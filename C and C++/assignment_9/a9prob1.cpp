/* 
CH-230-A
a9_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    //declaring a string for the country name.
    string my_country_name;
    cout << "Enter Country Name: ";

    //Reading the country of origin from the standard input.
    //Using getline if the country name has any spaces.
    getline (cin, my_country_name);

    //printing the country name
    cout << "Country Name: " << my_country_name << endl;
    return 0;
}