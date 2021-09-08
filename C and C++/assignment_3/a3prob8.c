/* 
CH-230-A
a3_p8.c
Suraj Giri
s.giri@jacobs-university.de
*/
#include<stdio.h>
//declaring functions for sum and average.
float sum(float arr[10], int idx){
    float total = 0;
    for(int idx2 = 0; idx2 <= idx; idx2++){
        total = total  + arr[idx2];
    }
    return total;
}
float average(float arr[10], int idx){
    float average = 0;
    average = sum(arr, idx) / (idx+1);
    return average;
}
int main(){
    //prviding input from the keyboard.
    float arr[10]; 
    int idx;
    float sum1 = 0, average1 = 0;
    for(idx = 0; idx < 10; idx++){
        scanf("%f", &arr[idx]);
        if( arr[idx] == -99.0){
            break;
        }
        sum1 = sum(arr, idx); //calling the sum function.
        average1 = average(arr, idx); //calling the average function.
    }
    printf("Sum: %f  Average: %f \n", sum1, average1);
    return 0;
}
