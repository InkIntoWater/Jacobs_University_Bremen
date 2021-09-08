/* 
CH-230-A
a4_p3.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
//defining function for geometric mean.
float geometric_mean(float arr[], int n){
    float product = 1;
    float gm;
    int i;
    for(i = 0; i < n; i++){
        product = arr[i] * product;
    }
    gm = pow(product, (1 /(float)i));
    return gm;
}
//defining function for finding highest number.
float highest_number(float arr[], int n){
    float largest = arr[0];
    for (int i =0; i < n; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}
//defining function for finding the smallest number.
float smallest_number(float arr[], int n){
    float small = arr[0];
    for (int i = 0; i < n; i++){
        if (small > arr[i]){
            small = arr[i];
        }
    }
    return small;
}
//defining function to calsulate the sum of all elements.
float sum_all(float arr[], int n){
    float total = 0;
    for (int i = 0; i < n; i++){
        total = total + arr[i];
    }
    return total;
}
int main(){
    char c;
    float arr[15];
    int n;
    float mean;
    float highest;
    float smallest;
    float sum;
    //providing input from the keyboard
    scanf("%c", &c);
    for (n = 0; n < 15; n++){
        scanf("%f", &arr[n]);
        if (arr[n] <= 0){
            //arr[n] = 0;
            break;
        }
    }
    //using switch for determining and calling functions for each task.
    switch (c){
        case 'm':
            mean = geometric_mean(arr, n);
            printf("the geometric mean=%f\n", mean);
            break;
        case 'h':
            highest = highest_number(arr, n);
            printf("the highest number=%f\n", highest);
            break;
        case 'l':
            smallest = smallest_number(arr, n);
            printf("the smallest number=%f\n", smallest);
            break;
        case 's':
            sum = sum_all(arr, n);
            printf("the sum of all elements=%f\n", sum);
            break;
    return 0;
    }
}