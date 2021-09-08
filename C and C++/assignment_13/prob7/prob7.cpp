/*
CH-230-A
a13_p7.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include<iostream>
#include<cstring>
#include<stdexcept>

using namespace std;

//declaring the OwnException Derived from exception
class OwnException : exception
{
    public:
    string str;
        OwnException();
        OwnException(string input_string) {str = input_string;}
        ~OwnException() throw() {}
        const char *what() const throw() { return "OwnException\n"; }
};

/*declaring the parameter function that throws the exception according to
the case provided*/ 
void function(int n)
{
    try
    {
        if (n == 1)
        {
            throw 'a';
        }
        else if (n == 2)
        {
            throw 12;
        }
        else if (n == 3)
        {
            throw true; 
        }
        else
        {
            throw OwnException("Default case exception");
        }
    }
    catch (char c)
    {
        throw;
    }
}

int main()
{
//trying and catching the error from the function declared above. 
    try
    {
        function(1);
    }
    catch (char c) //for catching 'a' when 1 is thrown
    {
        cerr << "Caught in main: " << c << endl;
    }
    try
    {
        function(2);
    }
    catch (int n) //for catching 12 when 2 is thrown
    {
        cerr << "Caught in main: " << n << endl;
    }
    try
    {
        function(3);
    }
    catch (bool b) //for catching boolean when 3 is thrown
    {
        cerr << "Caught in main: " << b << endl;
    }
    try
    {
        function(4);
    }
    catch (const OwnException &anom)    /*or catching the derived exception 
                                        OwnException when a string is thrown*/
    {
        cerr << "Caught in main: " << anom.what() << endl;
    }
    return 0;
}