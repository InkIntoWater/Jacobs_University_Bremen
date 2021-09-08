/* 
CH-230-A
a4_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
//declaring function to print two greatest numbers in the dynamic array
void two_greatest_numbers(int *dyn_array, int n){
    int largest = dyn_array[0];
    int largest2 = dyn_array[0];
    int temp;
    //to print the first greatest number
    for(int idx = 0; idx < n; idx++){
        if(largest < dyn_array[idx]){
            largest = dyn_array[idx];
            temp = idx;
        }
    }
    //to print the second greatest number
    for(int idx = 0; idx < n; idx++){
        if(largest2 < dyn_array[idx]){
            if (idx != temp) {
                largest2 = dyn_array[idx];
            }
        } 
    }
    printf("greatest Number: %d\n", largest);
    printf("second greatest Number: %d\n", largest2);
}
int main(){
    //declaring and reading an array having n elements.
    int *dyn_array, n, i;
    scanf("%d", &n);
    dyn_array = 
        (int * ) malloc (sizeof(int) * n);
    if (dyn_array == NULL)
        exit(1);
    for (i = 0; i < n; i++){
        scanf("%d", &dyn_array[i]);
    }
    two_greatest_numbers(dyn_array, n); //calling the function we declared
    free(dyn_array); //releasing the memory
    return 0;
}
