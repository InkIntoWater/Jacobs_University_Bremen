/*
CH-230-A
a2_p7.c
Suraj Giri
sgiri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int i = 8;
    do{
        printf(" i is %d \n", i);
        i--;
    }
    while (i >= 4);
    printf("That's it.\n");
    return 0;
}
/*This was a do...while iteration and do part of the iteration was missing.
    We need to print the desired output in the do part until the condition in the while part is satisfied.
    But our question had the printing and decrementing part in the while part which needs to be in the do part of the loop.
    */