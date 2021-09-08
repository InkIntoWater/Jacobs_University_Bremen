/* 
CH-230-A
a5_p10.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include<stdlib.h>

//declarin a recursive function to print integers n, n-1, ... 1
void integers (int n) {
    if(n <= 0){
        exit (1);
    }
    printf("%d ", n);
    integers(n-1);
}
int main (){
    //reading integer from the keyboard
    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    //calling the recursive function declared above.
    integers(n);
    return 0;
}
