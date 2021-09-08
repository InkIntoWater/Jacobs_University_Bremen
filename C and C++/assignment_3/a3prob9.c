/* 
CH-230-A
a3_p9.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
//declaring the function for the prototype
double sum25(double v[20], int idx){
    float sum = v[2] + v[5];
    return sum;
}
int main(){
    int n;
    scanf("%d", &n); //providing n from the keyboard
    int a = 0;
    double v[20];
    int idx;
    for(idx =0; idx < n; idx++){ //providing n double values using for loop
        scanf("%lf", &v[idx]);
        a++;
    }

    /*for making function valid only after the index of the array is 5 which means 
    that 6 values need to be entered*/
    if(a >= 6){     
        printf("sum=%lf\n", sum25(v, n));
        return 0;
    }
    else{
        printf("One or both positions are invalid\n");
        return -111;
    }
}