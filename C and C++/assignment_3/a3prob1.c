/* 
CH-230-A
a3_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    float x;
    int n;
    int i;
    scanf("%f", &x);
    scanf("%d", &n);
    // To check whether the input value of 'n' is valid or not. If not asking to reenter the correct value.
    while(n<=0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    // To print the value of the float'x' 'n' times.
    for(i = 1; i <= n;)
    {
        printf("%f\n", x);
        i++;
    }
    return 0;
}