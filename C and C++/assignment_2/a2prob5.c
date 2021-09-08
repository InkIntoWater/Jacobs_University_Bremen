/* 
CH-230-A
a2_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    int a;
    int *ptr_a = &a;
    printf("Enter a variable: ");
    scanf("%d", &a);
    printf("Address of a: %p\n", ptr_a);
    *ptr_a += 5;
    printf("New value: %d \n", *ptr_a);
    printf("Address of new variable: %p", &ptr_a);
    return 0;
}