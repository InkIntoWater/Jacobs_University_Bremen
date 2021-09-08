/* 
CH-230-A
a8_p8.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 0
#define FALSE 1

int main()
{
    //reading from keyboard the name of file whose words are to be counted.
    char f1name[20];
    scanf("%s", f1name);
    
    //declaringa  file pointer to open the file
    FILE *f1;
    f1 = fopen(f1name, "r");

//if invalid file name or file pointer does not open then error message
    if (f1 == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    
    int flag = 0;
    char ch;
    int word_count = 0;
    //using while loop to count the words till the end of file
    while ((ch = fgetc(f1)) != EOF)
    {
        if (ch == ' ' || ch == ',' || ch == '?' || ch == '!' 
        || ch == '.' || ch == '\t' || ch == '\r' || ch == '\n')
        //using flag to determine whether to count the word or not
        {
            flag = TRUE;            
        }
        else if (flag == TRUE)
        {
            word_count++;
            flag = FALSE;
        }
        
    }
    fclose(f1);
    printf("The file contains %d words.", word_count);

    return 0;
}