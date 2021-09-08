/*
CH-230-A
a2_p9.c
Suraj Giri
sgiri@jacobs-university.de
*/

#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a>='0'&& a<='9'){
        printf("%c is a digit\n", a);
    }
    else if ((a>='a'&& a<='z')||(a>='A' && a<='Z')){
        printf("%c is a letter\n", a);
    }
    else {
        printf("%c is some other symbol\n", a);
    }
}