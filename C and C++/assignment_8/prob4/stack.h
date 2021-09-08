/* 
CH-230-A
a8_p4.c
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
void decimal_to_binary(int n, struct stack *s);
void push (int x, struct stack *s);
void empty (struct stack *s);
int isfull(struct stack *s);
void create_empty_stack(struct stack *s);
void print_stack(struct stack *s);