
#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

//writing the main function to manipulate the stack
int main(){
    struct stack *test = (struct stack *)malloc(sizeof(struct stack));

    if (test == NULL)
    {
        exit(1);
    }

    test->count = 0;
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);
    printf("The binary representation of %d is: ",num);
    DecToBin(num, test);
 
    return 0;
 
}