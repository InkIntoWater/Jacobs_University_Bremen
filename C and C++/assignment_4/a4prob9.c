/* 
CH-230-A
a4_p9.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
/*Declaring a function that 
determines and returns the product of 
smallest and largest elements of an array*/
int prodminmax(int arr[], int n){
    int smallest = arr[0];
    int largest = arr[0];
    for (int idx=0; idx<n; idx++){
        if(smallest>arr[idx]){
            smallest = arr[idx];
        }
    }
    for (int idx=0; idx<n; idx++){
        if(largest<arr[idx]){
            largest = arr[idx];
        }
    }
    int product = smallest * largest;
    return product;
}

int main(){
    //reading integer n and n-integers into array called arr.
    int *arr, n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter n integers in array:\n");

    //allocating the memory for the array.
    arr = (int * ) malloc (sizeof(int) * n);
    if (arr == NULL)
        exit(1);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int answer= prodminmax(arr, n); //calaling the function we declared
    printf("Product of maximum and minimum= %d", answer);
    free(arr); //deallocating the memory of array.
    return 0;
}