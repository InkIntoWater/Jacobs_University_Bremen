

//defining required struct and funcntions
struct stack
{
    unsigned int count;
    int array[12]; 
}; 

void push (int x, struct stack *s);
void pop (struct stack *s);
void empty (struct stack *s);
int isempty (struct stack *s);
void DecToBin(int num, struct stack *s); 