/* 
CH-230-A
a6_p9.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// declaring the structure of a node or element 
struct node{
    int data;
    struct node *next;
}*head = NULL;

//declaring a function to add element at the beginning of the list
void add_at_beginning(int data){
    struct node *newelem;
    newelem = (struct node*) malloc(sizeof(struct node));
    if(newelem == NULL){
        printf("Could not allocate memory");
    }
    else{
        newelem->data = data;
        newelem->next = head;
        //assigning the new element at the beginning
        head = newelem;
    }
}

//declaring a function to add element at the end of the list
void add_at_end(int n){
    struct node *elematend;
    struct node *temp = head;
    elematend = (struct node*) malloc(sizeof(struct node));
    if(elematend == NULL){
        printf("Could not allocate memory.");
    }
    elematend->data = n;
    if (head == NULL){
        elematend->next = NULL;
        head = elematend;
    }
    else{
        //looping till the end
        while(temp->next){
            temp=temp->next;
        }
    //assigning the element at the end
    temp->next=elematend;
    elematend->next = NULL;
    }
}

//declaring a function to print the list
void print_list(){
    struct node *temp;
    if(head == NULL){
    }
    else{
        temp = head;
        while(temp != NULL){
            //printing the data in the elements of that list
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

//declaring a function to delete element at the beginning of the list
void delete_first_element(){
    struct node *delfirstnode;
    if (head == NULL){      
    }
    else{
        delfirstnode = head;
        //initializing the second element as head
        head = head->next;
        //freeing the memory of the previous head
        free(delfirstnode);
    }
}

//declaring a function to free the memory and quit the execution 
void free_n_quit(){
    struct node *temp;
    while(head != NULL){
        temp = head->next;
        //freeing the memory for head and then the elements next to them
        free(head);
        head = temp;
    }
}

//declaring a function to insert an element at a desired position
void insert_at_position(int a, int b){
    struct node *temp = head;
    struct node *temp2 = head;
    int count = 0;
    ////counting the number of elements
    while (temp != NULL){
        temp = temp->next;
        count = count + 1;
    }
    //invalid position if the position number is greater than count
    if ((a > count) | (a < 0)){
        printf("Invalid position!\n");
    }
    else{
        struct node *at_position2 = (struct node *)malloc(sizeof(struct node));
        if (at_position2 == NULL){
            printf("Unable to allocate memory.");
        }
        else{
            at_position2->data = b;
            at_position2->next = NULL;
            //looping till we get a
            while (a != 1){
                temp2 = temp2->next;
                a--;
            }
            //updating the new element at specified position in the node
            at_position2->next = temp2->next;
            temp2->next = at_position2;
        }
    }
}

//declaring a function to reverse the order of elements
void reverse(){
    struct node *temp1 = NULL;
    struct node *temp2 = NULL;
    //looping untill the end till head is null
    while (head != NULL){
        temp2 = head->next;
        head->next = temp1;
        temp1 = head;
        head = temp2;
    }
    head = temp1;
}

int main()
{
    int x, y, z, a, b;
    z = 1;
    char c;
    scanf("%c", &c);
    while (z == 1)
    //to loop until we get 'q' and quit value changes to 0
    {
        switch (c)
        {

            //'a' - add the following number at the end of the list
            case 'a':
                scanf("%d", &x);
                add_at_end(x);
                break;

            //'b' - add the following number at the beginning of the list
            case 'b':
            //int o;
                scanf("%d", &y);
                add_at_beginning(y);
                break;

            //'r' - remove the first element from the list
            case 'r':
                delete_first_element();
                break;
            
            //'p' - print the list
            case 'p':
                print_list();
                break;

            //'q' - free the meomry and quit the execution
            case 'q':
                free_n_quit();
                z = 0;
                break;

            //'i' - Invalid Position
            case 'i':
                scanf("%d", &a);
                scanf("%d", &b);
                insert_at_position(a, b);
                break;

            //'R' - Reverse the order of elements
            case 'R':
                reverse();
                break;
        }
        scanf("%c", &c);
    }
    return 0;
}