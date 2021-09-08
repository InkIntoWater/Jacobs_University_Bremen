/* 
CH-230-A
a7_p3.h
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

//struct declaration and function declarations
struct node{
    int data;
    struct node *next;
};

void add_at_beginning(int data);
void add_at_end(int n);
void print_list();
void delete_first_element();
void free_n_quit();