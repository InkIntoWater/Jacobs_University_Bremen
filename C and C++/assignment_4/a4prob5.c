/* 
CH-230-A
a4_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
//defining function to count the consonants.
int count_consonants(char str[]){
    char *ptr = str;
    int consonants = 0;
    //executing the while loop till the end of string.
    while(*ptr != '\0'){
        if((*ptr>=65 && *ptr<=90)||(*ptr>=97 && *ptr<=122)){

            if(*ptr!='a' && *ptr!='e' &&*ptr!='i' &&*ptr!='o' &&*ptr!='u'
            && *ptr!='A' && *ptr!='E' &&*ptr!='I' &&*ptr!='O' &&*ptr!='U')
            {
            consonants++;
            }
        }
        ptr++; //increasing the value of pointer.
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
    //str[strlen(str)-1] = '\0';    
    return 0;
}