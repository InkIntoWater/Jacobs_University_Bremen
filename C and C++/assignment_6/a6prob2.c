/* 
CH-230-A
a6_p2.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>

//defining macro to determine the least significant bit
#define LSB(c) {c & 1}
int main(){
    //reading input from the keyboard for the unsigned character
    unsigned char c;
    scanf("%c", &c);

    //providing output using bitwise operator only.
    printf("The decimal representation is: %d\n", c);
    int out = LSB(c);
    printf("The least significant bit is: %d\n", out);
    return 0;
}

