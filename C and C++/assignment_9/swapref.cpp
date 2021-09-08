/*
CH-230-A
a9_p7.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>

using namespace std;

//function for swapping the integers by reference
void swapping(int &a, int &b) // swap ints
{
    int temp;
    temp = a;
    a = b;
    b = temp;
} 

//function for swapping the floats by reference
void swapping(float &a, float &b) // swap floats
{
    float temp;
    temp = a;
    a = b;
    b = temp;
} 

//function for swapping the constant chars by reference
void swapping(const char *&str1, const char *&str2)  // swap char pointers
{
    const char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
} 

/*using the main function just as given in the question
by just calling the functions declared above*/
int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char* str1 = "One";
    const char* str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    cout << "After Swapping: \n";
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}