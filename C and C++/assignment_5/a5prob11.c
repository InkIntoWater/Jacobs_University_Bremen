/* 
CH-230-A
a5_p11.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
//declaring a recursive function to find whether given number is prime or not
int prime (int x, int i){
    //giving the stopping condition for the recursive function
    if (x == 0 || x == 1){
        return 0;
    }
    if(i == 1){
        return 1; //returning 1 if prime
    }
    else{
        if (x % i == 0){
            return 0; //returning 0 if not prime
        }
        else{
            //making the function recursive.
            return prime(x, i - 1);
        }
    }
}
int main(){
    //reading integer x from the keyboard.
    int x;
    scanf("%d", &x);\
    int i, checking;
    i = x/2;
    //calling the function declared above.
    checking = prime(x, i);
    //printing corresponding messages for prime or not
    if (checking == 1){
        printf("%d is prime\n", x);
    }
    else{
        printf("%d is not prime\n", x);
    }
    return 0;
}
