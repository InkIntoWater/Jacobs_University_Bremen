/* 
CH-230-A
a4_p12.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*that replaces all occurrences of the 
character c by the character e.*/
void replaceAll(char *str, char c, char e){
    int i = 0;
    for (i=0; i<strlen(str); i++){
        if(str[i] == c){
            str[i] = e;
        }
    }
    printf("String after replacing the ccharacter: %s\n",str);
}
int main(){
    char str[80], c, e;
        /*to provide the input and print the output repeatedly,
        we use the while loop to create an infinite loop.*/
        while(1){
            /*Reading a string, the character to be replaced
            and the replaacing character from the keyboard.
            */
            printf("\nEnter the string: ");
            fgets(str, 80, stdin);

            //terminating the program when stop is typed as the string.
            str[strlen(str)-1]='\0';
            if(strcmp(str, "stop")==0){
                break;
            }
            printf("Enter the character to be replaced: ");
            scanf("%c", &c);
            printf("Enter the replacing character: ");
            getchar();
            scanf("%c", &e);
            getchar();

            //printing the output.
            printf("\nThe original string: %s\n", str);
            printf("The character to be replace: %c\n", c);
            printf("The replacing character: %c\n", e);            
            replaceAll(str, c, e); //calling the function
        }
    return 0;
}
