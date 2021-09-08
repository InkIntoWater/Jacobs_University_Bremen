/* 
CH-230-A
a7_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: stack.h*/

//declaring a struct
struct stack
{
    unsigned int count;
    int array[12]; // Container
};

//list of functions in the program
void push (int x, struct stack *s);
void pop (struct stack *s);
void empty (struct stack *s);
int isempty (struct stack *s);