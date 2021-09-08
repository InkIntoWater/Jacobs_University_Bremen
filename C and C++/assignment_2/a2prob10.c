/*
CH-230-A
a2_p10.c
Suraj Giri
sgiri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int a, n, h; // a is the initial integer, n is the final integer that would be entered from keyboard and h is the hours.
    scanf("%d", &n);
    a = 1;
    while (n <= 0)
    {
        scanf("%d", &n);
    }
    printf("1 day = 24 hours \n");
    while ((a + 1) <= n)
    {
        h = (a + 1) * 24;
        printf("%d days = %d hours\n", a + 1, h);
        a++;
    }
    return 0;
}