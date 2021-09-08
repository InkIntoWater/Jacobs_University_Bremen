/* 
CH-230-A
a6_p3.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h> 

//defining a macro to find the maximum number
#define max1(a, b) ((a) > (b) ? (a) : (b))
#define max(a, b, c) max1(max1(a, b), (c))

//defining a macro to find the minimum number
#define min1(a, b) ((a) < (b)  ? (a) : (b))
#define min(a, b, c) min1(min1(a, b), (c))

//defining a macro to calculate the mid range among three numbers
#define mid_range(a, b, c) ((float)(min(a, b, c) + max(a, b, c))/2)

int main(){ 
    int x, y, z;
    float result;  

    //reading input from the keyboard. 
    scanf("%d",&x); 
    scanf("%d",&y); 
    scanf("%d",&z); 

    //calling the macro to calculate the mid range.
    result = mid_range(x, y, z); 

    printf("The mid-range is: %.6f\n",result); 
    return 0; 
}
