/*
CH-230-A
a13_p3.cpp
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
    //taking the integer value of n
    int n;
    cout << "Enter the value for n: " << endl;

    //taking the filenames of n files
    cin >> n;
    cout << "Enter the name of n files: " << endl;
    string s;  //declaring string to store the value of input files
    string output;
    ofstream out_f;
    out_f.open("concatn.txt", ios::binary);

//using for loop to take the filenames of n input files
    for (int i = 0; i < n; i++)
    {
        string filetoopen;
        ifstream in_f;
        cin >> filetoopen;
        in_f.open(filetoopen, ios::binary);

//concatenating the input files
        while (!in_f.eof())
        {
            getline(in_f, s);
            output = output + s + '\n';
        }

        in_f.close(); // closing all the input files

    }
    cout << "Done!!!" << endl;

//printing the concatenated output in the output file
    out_f << output;
    out_f.close();

    return 0;
}