/* 
CH-230-A
a5_p8.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
// declaring a function to print the two arrays.
void display(int **list, int x, int y){
    int i, idx;
    for (i = 0; i < x; i++){ //for rows
        for (idx = 0; idx < y; idx++){ //for columns
            printf("%d ", list[i][idx]);
        }
        printf("\n"); // to change line after each row.
    }
}
// declaring a function to carry out matrix multiplication.
void multiply(int **list, int **list2, int x, int y, int z){
    int i, idx, j, sum = 0, **arr3;
    arr3 = (int **)malloc(sizeof(int) * x);
    for (i = 0; i < x; i++){
        //dynamically allcocating memory
        arr3[i] = (int *)malloc(sizeof(int) * y);
    }
    if (arr3 == NULL){
        printf("not enough space");
        exit(1);
    }

    for (i = 0; i < x; i++){
        for (idx = 0; idx < y; idx++){
            for (j = 0; j < z; j++){
                sum = sum + (list[i][j] * list2[j][idx]);
            }
            arr3[i][idx] = sum;
            sum = 0;
        }
    }
    printf("The multiplication result A*B:\n");
    display(arr3, x, y);
    // deallocating memory.
    free(arr3);
}
// declaring a function to read input from the standard input
void matrix(int n, int m, int p){
    int **arr, **arr2, i, idx;

    arr = (int **)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++){
        // dynamically allocating memory
        arr[i] = (int *)malloc(sizeof(int) * m);
    }
    if (arr == NULL){
        printf("not enough space");
        exit(1);
    }
    arr2 = (int **)malloc(sizeof(int) * m);
    for (i = 0; i < m; i++){
        // dynamically allocating memory.
        arr2[i] = (int *)malloc(sizeof(int) * p);
    }
    if (arr2 == NULL){
        printf("not enough space");
        exit(1);
    }

    for (i = 0; i < n; i++){
        for (idx = 0; idx < n; idx++){
            scanf(" %d", &arr[i][idx]);
        }
    }
    for (i = 0; i < m; i++){
        for (idx = 0; idx < m; idx++){
            scanf("%d", &arr2[i][idx]);
        }
    }

    printf("Matrix A:\n");
    display(arr, n, m);
    printf("Matrix B:\n");
    display(arr2, m, p);
    multiply(arr, arr2, n, m, p);
    // deallocating memories
    free(arr);
    free(arr2);
}

int main(){
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    matrix(n, m, p);
    return 0;
}
