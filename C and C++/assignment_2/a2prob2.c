#include<stdio.h>
int main(){
    //reading a char from the keyboard
    char c;
    scanf("%c", &c);
    //printing the char as character, decimal, octal and hexadecima.
    printf("character=%c\n", c);
    printf("decimal=%d\n", c);
    printf("octal=%o\n",c);
    printf("hexadecimal=%x\n",c);
    return 0;
    }