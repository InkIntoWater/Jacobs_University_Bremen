#include<stdio.h>
int main(){
    char character[100];
    char c;
    scanf("%c", &c);
    printf("character=%c\n", c);
    printf("decimal=%d\n", c);
    printf("octal=%o\n",c);
    printf("hexadecimal=%x\n",c);
    return 0;
    }


    /*#include <stdio.h>
int main()
{
    int a;
    int r;
    printf("Enter an integer: ");
    scanf("%d",&a);
    {
        switch (r = a % 2 && a % 7)
        {
        case (r=0):
            printf("the number is divisible by 2 and 7");
            break;

        default:
            printf("the numebr is not divisible by 2 and 7");
        }
    }
    return 0;
}*/