/* 
CH-230-A
a6_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>

int main()
{   
    //reading unsigned char form the standard input
    unsigned char c; 
    scanf("%c",&c);

    //printing the decimal representation of the character
    printf("The decimal representation is: %d\n",c);

    //printing the decimal representation of the given char to binary
    unsigned char mask = 128; //128 decimal = 10000000 binary ie 8 bits
    printf("The binary representation is: ");
    while(mask > 0){
        if((c & mask) == 0)
            printf("0");
        
        else 
            printf("1");
        mask = mask >> 1;
    }
    printf("\n");
    return 0; 
}
