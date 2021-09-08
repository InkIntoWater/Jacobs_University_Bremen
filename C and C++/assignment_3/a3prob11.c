/* 
CH-230-A
a3_p11.c
Suraj Giri
s.giri@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
int main(){
//feeding input from the keyboard
    char one[100], two[100];
    char three[100];
    char c;
    fgets(one, sizeof(one), stdin);
    one[strlen(one)-1]='\0';
    fgets(two, sizeof(two), stdin);
    two[strlen(two)-1]='\0';
    scanf("%c", &c); //feeding character c

    //printing the length of both strings
    printf("length1=%ld\n", strlen(one));
    printf("length2=%ld\n", strlen(two));
    char result = strcmp(one, two);
    strcat(one, two);
    printf("concatenation=%s\n", one); // printing the concatenation of two strings
    strcpy(three, two);
    printf("copy=%s\n", three); //printing the cntent of two in third string

    //comparing two stings and printing the corresponding message.
    if (result < 0){
        printf("one is smaller than two\n");
    }
    else if (result > 0){
        printf("one is larger than two\n");
    }
    else {
        printf("one is equal to two\n");
    }

    //printing the occurence of characer c.
    for(int i = 0; i <= strlen(two); i++){
        if(two[i] == c){
            printf("position=%d\n", i);
            break;
        }
        else if(i < strlen(two)){
            continue;
        }
        else{
            printf("The character is not in the string\n");   
        }
    }
    return 0;
}