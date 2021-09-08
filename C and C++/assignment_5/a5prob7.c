/* 
CH-230-A
a5_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char first_str[100];
    char second_str[100];
    char *result;

    //reading two strings from teh standard input
    fgets(first_str, sizeof(first_str), stdin);
    fgets(second_str, sizeof(second_str), stdin);

    //assigning the end of the strings
    first_str[strlen(first_str)-1] = '\0';
    second_str[strlen(second_str)-1] = '\0';

    //adding the string length of both strings
    int concat_len = strlen(first_str) + strlen(second_str);

    //allocating memory for the concatenation
    result = (char*) malloc(sizeof(char)*concat_len);

    //concatenating the strings
    result = strcat(first_str, second_str);
    
    //printing the result of concatenation
    printf("Result of concatenation: %s\n", result);
    return 0;
}