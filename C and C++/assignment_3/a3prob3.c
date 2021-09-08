/* 
CH-230-A
a3_p3.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm) // defining our function
{
    float result = (float) cm / 100000; //conversion formula, int x was converted to float x.
    return result;
}
int main()
{
    int x; 
    float km;
    scanf("%d", &x);
    km = convert(x); // calling our function
    printf("Result of conversion: %f\n", km);
    return 0;
}
