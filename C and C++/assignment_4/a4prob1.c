/* 
CH-230-A
a4_p1.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
int main(){
    /*providing input for the lower limit, upper limit, step size
    from the keyboard*/
    float llimit;
    float ulimit;
    float ssize;
    scanf("%f", &llimit);
    scanf("%f", &ulimit);
    scanf("%f", &ssize);
    /*using for loop to print the table*/
    for (float x = llimit; x <= ulimit; x = x + ssize){
        printf("%f %f %f\n", x, x * x * M_PI, 2 * M_PI * x); //printing the radius, area and the perimeter
    }
    return 0;
}