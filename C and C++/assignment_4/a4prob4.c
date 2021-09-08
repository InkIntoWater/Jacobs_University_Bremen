/* 
CH-230-A
a4_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
//defining function to count the consonants.
int count_consonants(char str[]){
    int i;
    int consonants=0;
    for(i = 0; i < strlen(str); i++){
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
            
            if(str[i]!='a'&& str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'
            && str[i]!='A'&& str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
            {
            consonants++;
            }
        }
    }
    return consonants;
}
int main(){
    char str[100];
    int no_of_consonants;
    //using the infinite loop to repeatedly enter the string.
    while(1<2){
        fgets(str, sizeof(str), stdin);
        //stopping the execution of infinite loop if empty string is entered
        if(str[0] == '\n'){ 
            break;
        }
        no_of_consonants = count_consonants(str); //calling the function
        printf("Number of consonants=%d\n", no_of_consonants);
    }    
    return 0;
}
