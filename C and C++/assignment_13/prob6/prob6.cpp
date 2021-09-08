/*
CH-230-A
a13_p6.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(20, 8);
    try
    {
        v.at(21);

    }
    catch (const out_of_range &err)
    {

        cerr << "Exception: " << err.what() << endl;
    }
    return 0;
}