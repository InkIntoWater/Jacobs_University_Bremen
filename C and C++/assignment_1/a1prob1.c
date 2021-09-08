#include <stdio.h>
int main()
{
    double result; // The result of our calculation
    result = (3.0 + 1.0) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
/* 1. The values in line 4 all need to be floats.
2. It was showing 0.0000 because theinputs in line 5 were in integer but we are printing as long floats
and we have to have the same data types.*/
