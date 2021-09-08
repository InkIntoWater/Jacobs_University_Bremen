/* 
CH-230-A
a4_p10.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
/*Declaring a function that computes and returns
the product, division, power and inverse by reference*/
void proddivpowinv(float a, float b, float *prod, float *div, 
float *pwr, float *invb){
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}
/*A test program to check if the function works correctly
and printing the results in the main*/
int main(){
    float a, b, prod, div, pwr, invb;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    proddivpowinv(a, b, &prod, &div, &pwr, &invb); //calling the function.
    printf("Product=%f\n", prod);
    printf("Division=%f\n",  div);
    printf("Power=%f\n", pwr);
    printf("Inverse of b=%f\n", invb);
}
