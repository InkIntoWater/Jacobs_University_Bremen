/* 
CH-230-A
a6_p8.c
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

int main(){
    int x, y, z;
    z = 1;
    //int quit = 1;
    char c;
    scanf("%c", &c);
    //creating an infinite loop until we provide the swaitch case to quit
    while(z==1){
        switch (c){
            
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
        }
    scanf("%c", &c);
    }   
    return 0;
}