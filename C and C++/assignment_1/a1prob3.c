/* 
CH-230-A
a1_p3.c
Suraj Giri
sgiri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    float result;
    // The result of the division
    float a = 5.0;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
    return 0;
}
/* Errors: The code was lacking the # at the starting and 
our program is a code to calculate the division of floats but there input a and b were feeded as intergers and 
the input value of a was also a decimal.
Also the argument which was a float was being fed as a decimal.
Fixes: I fixed the same errors that I mentioned above by including a # sign at the beginning, feeding a and b as floats,
and providing the argument as a float.*/