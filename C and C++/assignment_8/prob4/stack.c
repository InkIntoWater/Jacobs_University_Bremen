/* 
CH-230-A
a8_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: stack.c*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//declaring a function to convert the positive decimal number to binary
void decimal_to_binary(int n, struct stack *s)
{
    int remainder;
    while(n!=0)
    {
        remainder = n%2;
        push(remainder, s);
        n = n/2;
    }
    
}

//defining a function to print stack
void print_stack(struct stack *s)
{
    for (int i=s->count-1; i>=0; i--)
    {
        printf("%d", s->array[i]);
    }
}

//declaring a functiopn to empty the stack
void create_empty_stack(struct stack *s)
{
    s->count=-1;
}
 
//declaring a function to check if the satck is full or not
int isfull(struct stack *s)
{
    if (s->count == 12)
    {
        return 1;
    }
    else
        return 0;
}
 
//declaring function to push the number into the stack
void push(int x, struct stack *s)
{
    if (isfull(s))
    {
        printf("Stack is full\n");
    }
 
    else
    {
        s->array[s->count] = x;
        s->count = s->count + 1;
        printf("%d", x);
    }
}
