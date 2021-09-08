/* 
CH-230-A
a7_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//declaring a function for sording in ascending order
int ascending(const void *num1, const void *num2){
    const int *a = (const int *)num1;
    const int *b = (const int *)num2;

    if (*a < *b)
        return -1;

    else if (*a > *b)
        return 1;

    else
        return 0;
}

//declaring a function for sorting in descending order
int descending(const void *num1, const void *num2){
    const int *a = (const int *)num1;
    const int *b = (const int *)num2;

    if (*a > *b)
        return -1;

    else if (*a < *b)
        return 1;

    else
        return 0;
}

//declaring a function to declare pointers with two functions for using qsort
int (*func[2])(const void *, const void *) = {ascending, descending};

int main(){
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //using while loop for having repeated input
    while (1){
        char c;
        scanf("%c", &c);

        //using switch for getting different outputs for different inputs
        switch (c){
            case 'a':{
                //using the qsort function for ascending order
                qsort(arr, n, sizeof(arr[0]), func[0]);
                for (i = 0; i < n; i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 'd':{
                //using the qsort function for descending order
                qsort(arr, n, sizeof(arr[0]), func[1]);
                for (i = 0; i < n; i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 'e':{
                exit(1);
                break;
            }
        } 
    }
    return 0;
}