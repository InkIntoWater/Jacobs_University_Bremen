/* 
CH-230-A
a7_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: teststack.h*/

#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

//writing the main function to manipulate the stack
int main(){
    struct stack *test = (struct stack *)malloc(sizeof(struct stack));

    if (test == NULL){
        exit(1);
    }

    test->count = 0;
    //using while loop for executing the program infinitely till stopping
    while (1){
        char c;
        scanf("%c", &c);

        //using switch for various test cases.
        switch (c){
            //'s' for pushing the number into the stack
            case 's':{
                int n;
                scanf("%d", &n);
                printf("Pushing ");
                push(n, test);
                /* pushes the number into the stack */
                break;
            }

            //'p' for popping the number on the top of the stack
            case 'p':{
                printf("Popping ");
                pop(test);
                break;
            }

            //'e' for emptying the stack
            case 'e':{
                printf("Emptying Stack ");
                empty(test);
                break;
            }

            //'q' for quiting the execution of the program
            case 'q':{
                printf("Quit\n");
                exit(1);
                break;
            }
        }
    }
    return 0;
}