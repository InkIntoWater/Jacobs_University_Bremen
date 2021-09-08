/* 
CH-230-A
a7_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include"linked_list.h"
struct node * head = NULL;

//function definitions

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