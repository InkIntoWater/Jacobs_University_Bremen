/* 
CH-230-A
a8_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring the file pointers and opening them
    FILE *f1, *f2;
    char ch;
    int d = 0;
    f1 = fopen("chars.txt", "r");
    f2 = fopen("codesum.txt", "w");

    //if the first file is empty, printing corresponding message.
    if (f1 == NULL)
    {
        printf("No character in the file chars.txt\n");
        exit(1);
    }

    //declaring character from the file
    ch = fgetc(f1);

    //using a while loop till counting the first 2 characters
    int count = 1;
    while (count <= 2)
    {
        d = d + (int)ch;
        ch = fgetc(f1);
        count++;
    }
    printf("Done");

    //printing the output in the codesum.txt file
    fprintf(f2, "Sum of ASCII code values is %d", d);

    //closing the files
    fclose(f1);
    fclose(f2);
    return 0;
}