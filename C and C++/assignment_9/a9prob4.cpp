/*
CH-230-A
a9_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include<iostream>
#include<string>

using namespace std;

//declaring a function to calculate the difference
int mycount(int x, int y)
{
    int diff;
    diff = y - x;
    return diff;
}

//defining a function to count the number of occurances of the character.
int mycount(char c, string s)
{
    int cnt=0;
    int z = s.length();
    for (int i=0; i<=z; i++)
    {
        if(s[i]==c){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int x, y;
    char c;
    string s;
    cout << "Enter two numbers:\n";
    cin >> x;
    cin >> y;
    cout << "Enter the character to be counted:\n";
    cin >> c;
    getchar();
    cout << "Enter the string:\n";
    getline(cin, s);
    cout << "The Diference is: ";

    //calling the function to calculate and printing the difference
    cout << mycount(x, y) << endl; 

    /*calling the function to and printing the occurance of the 
    character in the string*/
    cout << "the character " << "'" << c << "'" << " occurs " << mycount(c,s)
        <<" times."<<endl;
    return 0;
}