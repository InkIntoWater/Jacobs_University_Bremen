/* 
CH-230-A
a3_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
//declaring a function to print the pattern.
void print_form(int n, int m, char c)
{
    int base;
    int i, j;
    base = n + m - 1;
    //using the nested loop for printing the pattern such that for printing base print height.
    for (i = m; i < base+1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main()
{
    //providing input from the keyboard.
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    print_form (n, m, c); //printing the pattern
    return 0;
}