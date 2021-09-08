#include <stdio.h>
#include "stack.h"
#include <stdlib.h>


//for pushing the integer in the stack
void push(int x, struct stack *s){
    if (s->count >= 12){

        printf("Stack Overflow\n");
    }


    else{
        s->array[s->count] = x;
        s->count = s->count + 1;
        printf("%d\n", x);
    }
}

//for popping the number off the stack
void pop(struct stack *s){
    
    if (isempty(s) == 1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d\n", s->array[s->count - 1]);
        s->count = s->count - 1;
    }
}
//for getting the binary representation of the number
void DecToBin(int num, struct stack *s)
{
    int rem;
    while(num!=0)
    {
        rem = num%2;
        push(rem, s);
        num/=2;
    } 
    printf("\n"); 
          
}

//for checking if the stack is empty or not
int isempty(struct stack *s){
    if (s->count == 0)
        return 1;
    else
        return -1;
}