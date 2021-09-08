/* 
CH-230-A
a8_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //declaring the file pointers and opening them.
    FILE *f1, *f2, *f3;
    f1 = fopen("text1.txt", "r");
    f2 = fopen("text2.txt", "r");
    f3 = fopen("merge12.txt", "w");

    /*merging the data from text1.txt and text2.txt 
    and printing it into merge12.txt*/
    //firstly copying the data fron text1.txt into merge12.txt
    char ch;
    while((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f3);
    }
    
    //copying the data from text2.txt into merge12.txt
    while((ch = fgetc(f2))!= EOF)
    {
        fputc(ch, f3);
    }
/*if first file is empty then theere is no thing in the first file 
    and the data of the second file is added instantly after */
    printf("Done");

    //closing the files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}