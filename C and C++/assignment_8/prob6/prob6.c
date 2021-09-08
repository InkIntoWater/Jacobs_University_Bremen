/* 
CH-230-A
a8_p6.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //reading from keyboard the name of two files containing the doubles
    char f1name[20];
    char f2name[20];
    scanf("%s", f1name);
    scanf("%s", f2name);

    //declaring the file pointers and opening them.
    FILE *f1, *f2, *f3;
    f1 = fopen(f1name, "r");
    f2 = fopen(f2name, "r");
    f3 = fopen("results.txt", "w");

    //declaring the consituents and calculations asked in the question
    double input1, input2;
    double sum = 0;
    double difference;
    double product;
    double division;

    //storing the values of data from the files into the variables
    fscanf(f1, "%lf ", &input1);
    fscanf(f2, "%lf", &input2);

    //computing the sum, difference, product and division of the input
    sum = input1 + input2;
    difference = input1 - input2;
    product = input1 * input2;
    division = input1 / input2;

    printf("Done");

    //writing the results into the file 'results.txt'
    fprintf(f3, "sum = %lf \n", sum);
    fprintf(f3, "difference = %lf \n", difference);
    fprintf(f3, "product = %lf \n", product);
    fprintf(f3, "division = %lf \n", division);

    //closing the files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}