/* 
CH-230-A
a5_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
//declaring a function using int with the pointer and pointer arithmetic.
int counter(float * arr, int n){
    int i;
    for (i = 0; i < n; i++){
        if(arr[i] < 0){
            break;
        }
    }
    return i;
}
int main(){
    int n;
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    //calling the function and printing the output.
    printf("Before the first negative value: %d elements",counter(arr, n));
    return 0;
}