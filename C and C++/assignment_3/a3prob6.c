/* 
CH-230-A
a3_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
//defining the function.
float to_pounds(int kg, int g)
{
    float conversion = (((float) kg + (float) g/1000) * 2.2);
    return conversion;
}
//implementing the function
int main()
{
    int kg;
    int g;
    float p;
    scanf("%d", &kg); //reading the kilogram value from keyboard
    scanf("%d", &g); //reading the gram value from keyboard
    p = to_pounds(kg, g); //function implemented.
    printf("Result of conversion: %f\n", p);
    return 0;
}