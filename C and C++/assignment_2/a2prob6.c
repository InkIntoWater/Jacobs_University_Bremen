/*
CH-230-A
a2_p6.c
Suraj Giri
sgiri@jacobs-university.de
*/
#include<stdio.h>
int main()
{
    double x;
    double y;
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;
    printf("Enter first double: ");
    scanf("%lf", &x);
    getchar();
    printf("Enter second double");
    scanf("%lf", &y);
    printf("Address on ptr_one: %p\n", ptr_one);
    printf("Address on ptr_two: %p\n", ptr_two);
    printf("Address on ptr_three: %p\n", ptr_three);
    return 0;
}