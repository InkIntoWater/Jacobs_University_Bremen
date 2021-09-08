/*
CH-230-a
a2_p1.c
Suraj Giri
sgiri@jacobs-university.de
*/
#include<stdio.h>
int main()
{
    //reading input from the keyboard
    char numbers[100];
    char integers[100];
    char characters[100];
    double a1;
    fgets(numbers, sizeof(numbers), stdin);
    sscanf(numbers, "%lf", &a1);
    double b1;
    fgets(numbers, sizeof(numbers), stdin);
    sscanf(numbers, "%lf", &b1);
    double sum = a1 + b1;
    double difference = a1 - b1;
    double square = a1 * a1;
    int a2;
    fgets(integers, sizeof(integers), stdin);
    sscanf(integers, "%d",&a2);
    int b2;
    fgets(integers, sizeof(integers), stdin);
    sscanf(integers, "%d", &b2);
    int isum = a2+b2;
    int iproduct = a2*b2;
    char a3;
    fgets(characters, sizeof(characters), stdin);
    sscanf(characters, "%c", &a3);
    char b3;
    fgets(characters, sizeof(characters), stdin);
    sscanf(characters, "%c", &b3);
    //printing output.
    printf("sum of doubles=%lf\n", sum);
    printf("difference of doubles=%lf\n", difference);
    printf("square=%lf\n", square);
    printf("sum of integers=%d\n", isum);
    printf("product of integers=%d\n", iproduct);
    printf("sum of chars=%d\n", a3 + b3);
    printf("product of chars=%d\n",a3*b3);
    printf("sum of chars=%c\n",a3 + b3);
    printf("product of chars=%c\n",a3*b3);
    return 0;
}