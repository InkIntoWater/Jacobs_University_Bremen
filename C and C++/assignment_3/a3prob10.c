/* 
CH-230-A
a3_p10.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
//declaring funtion for tproduct of two floats
float product(float a, float b){
    float multiple = 0;
    multiple = a * b;
    return multiple;
}
//declaring the function for product by reference
void productbyref(float a, float b, float *p){
    *p = a *b;
    printf("product by Reference: %f\n", *p);
}
//declaring the function for modifying the values by reference
void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
    printf("Modified by reference: %f %f\n" , *a, *b);
}
int main(){
    float a;
    float b;
    float p;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Product of two float values: %f\n", product(a, b)); //printing the product of two floats
    productbyref(a, b, &p); //printing the product by reference
    modifybyref(&a, &b); //printing the modified values using reference
    return 0;
}