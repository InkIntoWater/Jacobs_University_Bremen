/* 
CH-230-A
a5_p9.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//declarinag a function to read values from standard input.
void input(int ***arr, int x, int y, int z){
    int i, j, idx;
    //input for rows
    for (i = 0; i < x; i++){
        //input for column
        for (j = 0; j < y; j++){
            //input for depth.
            for (idx = 0; idx < z; idx++){
                scanf("%d", &arr[i][j][idx]);
            }
        }
    }
}
//declaring a function to print the matrix.
void output(int ***arr, int x, int y, int z){
    int i, j, idx;
    for (idx = 0; idx < z; idx++){
        printf("Section %d:\n", idx + 1);
        for (i = 0; i < x; i++){
            for (j = 0; j < y; j++){
                printf("%d ", arr[i][j][idx]);
            }
            printf("\n");
        }
    }
}


int main(){
    int x, y, z, i, j;
    int ***arr;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    //allocating memory for the 3d-array
    arr = (int ***)malloc(sizeof(int) * x);
    if (arr == NULL){
        printf("not enough memory");
        exit(1);
    }

    for (i = 0; i < x; i++){

        arr[i] = (int **)malloc(sizeof(int) * y);
        if (arr == NULL){
            printf("allocation failed");
            exit(1);
        }

        for (j = 0; j < y; j++){
            arr[i][j] = (int *)malloc(sizeof(int) * z);
            if (arr == NULL){
                printf("allocation failed");
                exit(1);
            }
        }
    }
    
    //calling the function to read input from the keyboard.
    input(arr, x, y, z);

    //calling the function to print the output
    output(arr, x, y, z);

    //dellocating the memory
    free(arr);
    return 0;
}