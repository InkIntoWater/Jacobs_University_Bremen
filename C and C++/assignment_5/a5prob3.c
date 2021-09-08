/* 
CH-230-A
a5_p3.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
//declaring the function to count the number of lowercase characters.
int count_lower(char *str){
    int cnt = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    //creating an infinite loop to repeatedly take input and give output.
    while(1<2){
        char str[50];
        fgets(str, sizeof(str), stdin);
        if(str[0] == '\n'){
            break;
        }
        //printing the number of lowercase characters by calling the function.
        printf("The number of lowercase characters: %d\n", count_lower(str));
    }
    return 0;
}