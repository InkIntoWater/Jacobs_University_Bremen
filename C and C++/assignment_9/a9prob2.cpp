/* 
CH-230-A
a9_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include<iostream>

using namespace std;

int main()
{
    //declaring integer, double and a string
    int n;
    double x;
    string s;

    //reading the values of integer, double and string from the standard input
    cin >> n;
    cin >> x;
    cin >> s;

    //using a for loop to print the s : x pattern n times
    for(int i=0; i<n; i++)
    {
        cout << s << " : " << x << endl;
    }
    return 0;
}
