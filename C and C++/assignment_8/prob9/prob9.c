/* 
CH-230-A
a8_p9.c
Suraj Giri
s.giri@jacobs-university.de
*/

/*Write a program which reads from the standard input the value of an integer n and then the
names of n files. The program should concatenate the content of the n files separated by ’\n’
and write the result on the standard output and also into output.txt.
Read the input files and write the output file using the binary mode. Use a char buffer of size 64
bytes and chunks of size 1 byte when reading and the same buffer with chunks of size 64 bytes
(or less if the last write and file size is not a multiply of 64) when writing.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    FILE *fp, f1;
    fp = (FILE *)malloc(sizeof(FILE) * n);
    f1 = fopen("output.txt", "w");

    for (int i = 0; i < n; i++)
    {
        char fname[100];
        scanf("%s", fname);
        fp = fopen(fname, "r");
        char ch;
        while ((ch = fgetc(fp)) != EOF)
        {
            fputc(ch, f1);
        }
        fclose(fp);
    }
    fclose(f1);
    return 0;
}

/*int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        char fname[100];
        scanf("%s", fname);

        FILE *fp;
        fp = fopen(fname, 'r');
    }
}*/