/* 
CH-230-A
a2_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    float a;
    float b;
    float h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    float sq_area = a*a;
    float rt_area = a*b;
    float tr_area = (a*h)/2;
    float tz_area = h * (a+b)/2;
    printf("square area=%f\n",sq_area);
    printf("rectangle area=%f\n", rt_area);
    printf("triangle area=%f\n", tr_area);
    printf("trapezoid area=%f\n", tz_area);
    return 0;
}