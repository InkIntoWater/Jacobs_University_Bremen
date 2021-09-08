/* 
CH-230-A
a7_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//defining a function to print all the characters in uppercase.
void upper_case(char c){
    printf("%c", toupper(c));
}

//defining a function to print all the characters in lowercase.
void lower_case(char c){
    printf("%c", tolower(c));
}

//defining a function to print the uppercase into lowercase and vice versa.
void swap(char c){
    if (isupper(c) != 0){
        printf("%c", tolower(c));
    }
    else if (islower(c) != 0){
        printf("%c", toupper(c));
    }
    else{
        printf("%c", c);
    }
}

//defining a function to quit the execution
void quit(char c){
    exit(1);
}

//defining a function to print all the characters of the string.
void print_str(char *string, void func(char)){
    int i = 0;
    while (string[i] != '\0'){
        func(string[i]);
        i++;
    }
}

//defining a function to declare array of pointers.
void (*function_array[4])(char) = {upper_case, lower_case, swap, quit};

int main(){
    int n;
    char input[50];
    fgets(input, sizeof(input), stdin);
    while (1){
        scanf("%d", &n);
        //calling the functions defined above
        print_str(input, function_array[n - 1]);
    }
    return 0;
}