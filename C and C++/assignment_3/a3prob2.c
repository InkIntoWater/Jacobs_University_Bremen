/* 
CH-230-A
a3_p2.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    // feeding input from the keyboard
    char ch;
    int n;
    scanf("%c", &ch);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("the ch-%d character is: %c\n", i, ch - i);
    }
   /* printf("the character is: %c\n", ch);          //printing the given character ch.
    printf("the ch-1 character is %c\n", ch - 1);  // printing the ch-1 character.
    printf("the ch-n character is: %c\n", ch - n); //printing the ch-n character.*/
    return 0;
}


/* 
CH-230-A
a3_p2.c
Suraj Giri
s.giri@jacobs-university.de
*/

/*#include<stdio.h>
int main()
{
    // feeding input from the keyboard
    char ch;
    int n;
    scanf("%c", &ch);
    scanf("%d", &n);
    printf("the character is: %c\n", ch); //printing the given character ch.
    printf("the ch-1 character is %c\n", ch - 1); // printing the ch-1 character.
    printf("the ch-n character is: %c\n", ch - n); //printing the ch-n character.
    return 0;
}*/