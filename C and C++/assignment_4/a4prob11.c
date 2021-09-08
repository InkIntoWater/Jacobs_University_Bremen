/* 
CH-230-A
a4_p11.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/* Declaring a function that counts the occurrences
of the character c in the string str in the case insensitive manner*/
int count_insensitive(char *str, char c){
    int cnt=0;
    for (int idx=0; idx<strlen(str); idx++){
        if(tolower(str[idx])==tolower(c)){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    char*str, *new_str;

    //memory allocation for original string
    str = (char*) malloc(sizeof(char) * 50);
    printf("Enter the string: ");
    fgets(str, 50, stdin); //taking input for string from keyboard

    //memory allocation for new string
    new_str = (char*) malloc(sizeof(char) * strlen(str));
    //copying the original string into new string.
    strc_str, strpy(new); 
    free(str);//deallocating memory of original string.
    
    //printing the occurance of the characters.
    printf("The character 'b' occurs %d times.\n", 
    count_insensitive(new_str, 'b'));
    printf("The character 'H' occurs %d times.\n",
    count_insensitive(new_str, 'H'));
    printf("The character '8' occurs %d times.\n",
    count_insensitive(new_str, '8'));
    printf("The character 'u' occurs %d times.\n",
    count_insensitive(new_str, 'u'));
    printf("The character '$' occurs %d times.\n",
    count_insensitive(new_str, '$'));

    free(new_str); //deallocating memory of new string.
    return 0;
}
