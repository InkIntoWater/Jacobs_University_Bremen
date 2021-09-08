/* 
CH-230-A
a4_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
//declaring function to print the matrix in the row and column form.
void print_2d (int array_2d[30][30], int n){
    for (int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            printf("%d ", array_2d[r][c]);
        }
        printf("\n");
    }
}
//declaring function to print the elements under the main diagonal.
void under_main_diag (int array_2d[30][30], int n){
    for (int r=0; r<n; r++){
        for (int c=0; c<n; c++){
            if (c<r){
                printf("%d ", array_2d[r][c]);
            }
        }
    }
    printf("\n");
}
int main(){
    //declaring and reading a two dimensional array.
    int array_2d [30][30];
    int n, r, c;
    scanf("%d", &n);
    for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            scanf("%d", &array_2d[r][c]);
        }
    }
    /*calling the functions to print the matrix and 
    the elements under the main diagonal.*/
    printf("The entered matrix is:\n");
    print_2d(array_2d, n);
    printf("Under the main diagonal:\n");
    under_main_diag(array_2d, n);
    return 0;
}