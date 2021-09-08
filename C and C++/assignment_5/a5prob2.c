/* 
CH-230-A
a5_p2.c
Suraj Giri
s.giri@jacobs-university.de
*/
#include<stdio.h>

//declaring the function
void divby5(float arr[], int size){
    for(int idx = 0; idx < size; idx++){
        arr[idx] = arr[idx]/5;
    }
}
int main(){
    int size = 6;
    //declaring array
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    //printing the array before division
    printf("Before:\n");
    for(int i = 0; i < size; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    //printing the array after division
    printf("After:\n");
    //calling the function declared
    divby5(arr, size);
    for(int j = 0; j < size; j++){
        printf("%.3f ", arr[j]);
    }
    printf("\n");
    return 0;
}