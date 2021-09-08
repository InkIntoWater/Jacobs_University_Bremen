/* 
CH-230-A
a6_p4.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>

//declaring a macro INTERMEDIATE that is defined while compiling
#define INTREMEDIATE

int main(){
    //reading from standard input the dimension of the vectors
	int n;
	scanf("%d", &n);
    //reading from standard input the components matrices of x and y.
	int x[n], y[n];
    for (int i = 0; i < n; ++i){
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < n; ++i){
		scanf("%d", &y[i]);
	}
	int product[n];
	int sum = 0;
	for (int i = 0; i < n; ++i){
		product[i] = x[i] * y[i];
		sum = sum + product[i];
	}
    //checking if intermediate value is defined or not.
	#ifdef INTREMEDIATE
	printf("The intermediate product values are:\n");
	for (int i = 0; i < n; ++i){	
	 	printf("%d\n", product[i]);
		}
	#endif
	printf("The scalar product is: %d\n", sum);
	return 0;
}