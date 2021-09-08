/* 
CH-230-A
a5_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//declaring a function to divide the input numbers by 5.
void divby5(int *arr, int n){
    for (int idx = 0; idx < n; idx++){
        arr[idx] = arr[idx] / 5;
    }
}
int main(){
    int *arr, n;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(arr) * n);
    if (arr == NULL)
        exit(1);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //calling the function declared above.
    divby5(arr, n);
    for (int j = 0; j < n; j++){
        printf("%d \n", arr[j]); //printing the result
    }
    free(arr); //freeing the allocated memory.
    return 0;
}
