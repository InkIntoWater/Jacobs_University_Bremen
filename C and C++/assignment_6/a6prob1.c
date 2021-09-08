/* 
CH-230-A
a6_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>

// Define macro to swap two numbers
#define SWAP(t,x,y) { t temp;  temp = x;  x = y;   y = temp; }
int main()
{
    int a, b;
    double c, d;
    //providing input from the keyboard
    scanf("%d\n%d", &a, &b);
    scanf("%lf\n%lf", &c, &d);


    //swapping the integers
    SWAP(int, a, b);
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);

    //swapping the floats
    SWAP (double, c, d);
    printf("%.6lf\n", c);
    printf("%.6lf\n", d);
    return 0;
}
