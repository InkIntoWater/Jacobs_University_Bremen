/* 
CH-230-A
a8_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: convertingstack.c*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//writing the main function to manipulate the stack
int main()
{
    struct stack *test = (struct stack *)malloc(sizeof(struct stack));

    if (test == NULL){
        exit(1);
    }

    test->count = 0;

    unsigned int x;
    scanf("%d", &x);

    printf("The binary representation of %d is ", x);
    decimal_to_binary(x, test);
    return 0;
}
   