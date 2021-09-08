/*
CH-230-A
a9_p6.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <cmath>
#include <iostream>

using namespace std;

/*declaring a function to determine and return the first positive and 
even value from the array of integers */
int myfirst(int arr_int[])
{
    int i = 0;
    int a;
    for (i = 0; i < 10; i++)
    {
        if ((arr_int[i] > 0) && (arr_int[i] % 2 == 0))
        {
            a = arr_int[i];
            return a;
            break;
        }
    }
    return 1;
}

/*declaring a function to determine and return the first negative element 
which does not have the fractional part from the array of doubles*/
double myfirst(double arr_double[])
{
    int i = 0;
    double a;
    for (i = 0; i < 10; i++)
    {
        if ((arr_double[i] < 0) && ((arr_double[i] - round(arr_double[i])) == 0))
        {
            a = arr_double[i];
            return a;
            break;
        }
    }
    return -1.1;
}

/*declaring a function to determine and return the first element which is 
consonant from the array of a characters*/
char myfirst(char arr_char[])
{
    int i = 0;
    char c;
    for (i = 0; i < 10; i++)
    {
        if (arr_char[i] != 'a' && arr_char[i] != 'e' && arr_char[i] != 'i' && arr_char[i] != 'o' && arr_char[i] != 'u')
        {
            c = arr_char[i];
            return c;
            break;
        }
    }
    return '0';
}
int main()
{
    int arr_int[10];
    double arr_double[10];
    char arr_char[10];

    //taking input of the array of integers from the keyboard
    for (int i = 0; i < 10; i++)
    {
        cin >> arr_int[i];
    }
    
    //taking input of the array of doubles from the keyboard
    for (int i = 0; i < 10; i++)
    {
        cin >> arr_double[i];
    }
    
    //taking input of the array of characters from the keyboard
    for (int i = 0; i < 10; i++)
    {
        cin >> arr_char[i];
    }
    
    /*calling the functions declared above and printing the output
    from the functions*/
    cout << "output: \n";
    cout << myfirst(arr_int) <<"\n";
    cout << myfirst(arr_double) << "\n";
    cout << myfirst(arr_char) << "\n";
    return 0;
}

/*
Write three overloaded functions ... myfirst(...) which should do the following:
1) if called with an array of integers, it determines and returns the first positive and even value
from the array. If no such element exists then −1 should be returned;
2) if called with an array of doubles, it determines and returns the first negative element which
does not have a fractional part. If no such element exists then −1.1 should be returned;
3) if called with an array of chars, it determines and returns the first element which is a consonant. 
If no consonants are present in the array then the character ’0’ should be returned.
Write a program which calls the above functions and illustrates their effect. You may choose to
enter test data from the keyboard or to initialize variables within your code.
*/
