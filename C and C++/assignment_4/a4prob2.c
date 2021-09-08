/* 
CH-230-A
a4_p2.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
int main(){
//providing input from the keyboard.
    char line[50];
    fgets(line, sizeof(line), stdin);
    line[strlen(line)-1] = '\0'; //providing the stopping value to the code.
/*Printing the string as shown in
the given testcase.*/
    for(int i = 0; i < strlen(line); ++i){
        if (i % 2 == 0){
            printf("%c\n", line[i]);
        }
        else{
            printf("%2c\n", line[i]);
        }
    }
    return 0;
}
