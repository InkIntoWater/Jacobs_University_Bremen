/* 
CH-230-A
a7_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: stak.c*/

#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

//declaring function to push the number into the stack
void push(int x, struct stack *s){
    if (s->count >= 12){
    //if the stack has more than allocated intergers, then stack overflow
        printf("Stack Overflow\n");
    }

    else{
        s->array[s->count] = x;
        s->count = s->count + 1;
        printf("%d\n", x);
    }
}

//declaring a function to pop a number on the top off the stack
void pop(struct stack *s){
    //if the given stack is empty, stack underflow
    if (isempty(s) == 1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d\n", s->array[s->count - 1]);
        s->count = s->count - 1;
    }
}

//declaring a function to empty the stack
void empty(struct stack *s){
    printf("Emptying Stack ");
    while (s->count > 0){
        printf("%d ", s->array[s->count - 1]);
        s->count--;
    }
    printf("\n");
}

//declaring a function to check if the satck is empty or not
int isempty(struct stack *s){
    if (s->count == 0)
        return 1;
    else
        return -1;
}