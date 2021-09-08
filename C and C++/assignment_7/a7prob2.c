/* 
CH-230-A
a7_p2.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//defining a struct to create a doubly linked list of characters
struct list{
    char data;
    struct list *next;
    struct list *previous;
};

// defining a struct for linked list to add the character at the beginning.
struct list *add_at_beginning(struct list *list1, char data){
    struct list *newelem;
    newelem = (struct list *)malloc(sizeof(struct list));
    if (newelem == NULL){
        printf("Error allocating memory\n");
        return list1;
    }

    (*newelem).data = data;
    (*newelem).next = list1;
    (*newelem).previous = NULL;

    if (list1 == NULL){
        return newelem;
    }
    else{
        list1->previous = newelem;
    }

    return newelem;
}

//defining a struct for linked list to remove all elements from the list
struct list *remove_all(struct list *list1, char c){
    if (list1 == NULL)
        return list1;

    struct list *p = list1;
    int count = 0; 
    while (p != NULL){
        if (p->data == c && p->previous != NULL){
            if (p->next != NULL){ 
                struct list *temp = p;
                temp->previous->next = p->next;
                p = p->next;
                p->previous = temp->previous;
                free(temp);
                count++;
            }
            else if (p->next == NULL){ 
                p = p->previous;
                p->next = NULL;
                count++;
            }
        }
        else if (p->data == c && p->previous == NULL){ 
            p = p->next;
            list1 = p;
            count++;
        }
        else if (p->data != c){
            p = p->next;
        }
    }
    if (count == 0){ 
        printf("The element is not in the list!\n");
    }

    return list1;
}

//declaring a function to print the current list.
void print_current_list(struct list *list1){
    struct list *p;
    for (p = list1; p; p = p->next){
        printf("%c ", p->data);
    }
    printf("\n");
}

//declaring a function to print the elements of the list backwards.
void print_backwards(struct list *list1){
    struct list *p;
    for (p = list1; p->next != NULL; p = p->next){
        //nothing
    }
    while (p != NULL){
        printf("%c ", p->data);
        p = p->previous;
    }
    printf("\n");
}

//declaring a function to empty the list and free the memory
void empty_list(struct list *list1){
    struct list *nextelem;
    while (list1 != NULL){
        nextelem = list1->next;
        free(list1);
        list1 = nextelem;
    }
}

int main(){
    int n;
    struct list *list1 = NULL;

    //to create an infinte loop till the exit and empty command is provided
    while (1 < 2){ 
        scanf("%d", &n);
        switch (n){
            case 1:{
            char c;
            //getchar();
            scanf("%c", &c);

            list1 = add_at_beginning(list1, c);
            break;
        }

        case 2:{
            char c;
            getchar();
            scanf("%c", &c);
            list1 = remove_all(list1, c);
            break;
        }

        case 3:{
            print_current_list(list1);
            break;
        }

        case 4:{
            print_backwards(list1);
            break;
        }

        case 5:{
            empty_list(list1);
            exit(1);
            break;
        }
        }
    }
    return 0;
}