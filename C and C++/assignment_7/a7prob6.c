/*
CH-230-A
a7_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaring a struct to keep the data of the person
struct person{
    char name[30];
    int age;
};

//declaring functions to sort the data of the list of persons
struct person *list;
int n;
int by_name(struct person *p, struct person *q);
void bsort(struct person *list, int n,
           int func(struct person *, struct person *));

//declaring function to swap the information of persons
void swap(struct person *p, struct person *q){
    struct person *temp = (struct person *)malloc(sizeof(struct person));
    if (temp == NULL){
        exit(1);
    }

    strcpy(temp->name, p->name);
    temp->age = p->age;
    strcpy(p->name, q->name);
    p->age = q->age;
    strcpy(q->name, temp->name);
    q->age = temp->age;
    free(temp);
}

//declaring function for comparing the age between persons
int by_age(struct person *a, struct person *b){
    if (a->age > b->age){
        return -1;
    }

    else if (a->age == b->age){
        return by_name(a, b);
    }

    return 1;
}

//declaring function for comparing the names between persons.
int by_name(struct person *a, struct person *b){
    if (strcmp(a->name, b->name) > 0){
        return -1;
    }

    else if (strcmp(a->name, b->name) == 0){
        return by_age(a, b);
    }

    return 1;
}

//declaring a bubblesort function
void bubble(struct person *list, int n,
            int func(struct person *, struct person *)){
    int x;
    int y;
    do{
        y = 0;
        for (x = 1; x < n; x++){

            if (func(&list[x - 1], &list[x]) == -1){
                swap(&list[x - 1], &list[x]);
                y = 1;
            }
        }

    } 

    //for printing output in the standard output
    while (y == 1);
    for (int i = 0; i < n; i++){
        printf("{%s, %d}; ", list[i].name, list[i].age);
    }
    printf("\n");
}

int main(){
    int i, c;
    scanf("%d", &c);

    struct person *list = (struct person *)malloc(sizeof(struct person) * c);
    if (list == NULL){
        exit(1);
    }

    //providing input from the standard input
    for (i = 0; i < c; i++){
        scanf("%s", list[i].name);
        scanf("%d", &list[i].age);
    }
    bubble(list, c, by_age);
    bubble(list, c, by_name);
    return 0;
}