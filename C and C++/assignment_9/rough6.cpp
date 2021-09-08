/*
CH-230-A
a9_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

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

#include<iostream>

using namespace std;

int myfirst(int arr_i[])
{
    for(int i=0; i<100; i++)
    {
        //int i = 0;
        if ((arr_i[i]>0 ) && (arr_i[i]%2 == 0))
        {
            cout << arr_i[i];
            break;
        }
        else
        {
            return -1;
        }
    }
    return 0; 
}

int main()
{
    int n;
    cin >> n;
    int arr_i[n];
    //double arr_d[100];
    //char arr_c[100];
    int i = 0;
    for (i=0; i < n; i++){
    cin >> arr_i[i];
    }
    cout << myfirst(arr_i);
    return 0;
}