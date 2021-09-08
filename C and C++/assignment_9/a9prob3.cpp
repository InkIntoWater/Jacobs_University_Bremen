/* 
CH-230-A
a9_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include<iostream>

using namespace std;

//declaring a function to determine the absolute value of the real number.
/*when I keep abs to calculate the absolute value the grader
shows compilation error so I kept absolute instead of abs*/
float absolute(float n) 
{                       
    if(n < 0)
    {
        n = -n;
    }
    else if(n > 0)
    {
        n = n;
    }
    return n;
}

//calling the function printing the returned absolute value.
int main()
{
    float n;
    cin >> n;
    cout << "Absolute Value: " << absolute(n) << endl;
    return 0;
}