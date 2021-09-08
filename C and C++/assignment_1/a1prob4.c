/* 
CH-230-A
a1_p4.c
Suraj Giri
sgiri@jacobs-university.de
*/

#include <stdio.h>
int main()
{   int sum, product, difference, remainder;
    double division;
    int x = 17, y = 4; 
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    sum = x + y;
    printf("sum=%d\n", sum);
    product = x * y;
    printf("product=%d\n", product);
    difference = x - y;
    printf("difference=%d\n", difference);
    division = (double)x / (double)y;
    printf("division=%lf\n", division);
    remainder = x % y;
    printf("remainder of division=%d\n", remainder);
    return 0;
}
