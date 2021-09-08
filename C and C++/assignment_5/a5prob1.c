/* 
CH-230-A
a5_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/

/*#include<stdio.h>
//declaring a void funcion
void print_pattern(int n, char ch){
    int tempv = n;
    for(int idxl=1; idxl<=n; idxl++){
        for(int idxp=0; idxp<tempv; idxp++){
            printf("%c", ch);
        }
        tempv--;
        printf("\n");
    }
}
int main(){
    //taking input from the keyboard.
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    print_pattern(n, ch); //calling the function to print pattern.
    return 0;
}*/
#include<stdio.h>
//declaring a void funcion
void print_pattern(int n, char ch){
    int tempv = n;
    for(int idxl=0; idxl<n; idxl++){
        for(int idxp=tempv; idxp>0; idxp--){
            printf("%c", ch);
        }
        tempv--;
        printf("\n");
    }
}
int main(){
    //taking input from the keyboard.
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    print_pattern(n, ch); //calling the function to print pattern.
    return 0;
}