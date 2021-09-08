/* 
CH-230-A
a6_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>

int main(){
    //reading unsigned char form the standard input
	unsigned char c;
	scanf("%c", &c);

    //printing the decimal representation of the character
	printf("The decimal representation is: %d\n", c);
    /*for counting the binary digits that is significant and 
    not bigger than the value of the character we signed*/
	int cnt;
    for (cnt = 0; (1<<cnt) <= c; cnt++){
    }

    //printing the backwards binary representation of the read char
	printf("The backwards binary representation is: ");
	for (int i=0; i < cnt; i++){
	    printf("%d", ((c>>i)&1)); /*bitwise operation for the
                                    respective places of 0s and 1s.*/
	}
    printf("\n");
	return 0;
}