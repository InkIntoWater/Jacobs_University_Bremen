/* 
CH-230-A
a6_p7.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

/*declaring a function to change the decimal representation of given character
  to its binary representation*/
void intobin(unsigned char c){
    unsigned char mask = 128; 
    while(mask > 0){
        if((c & mask) == 0)
            printf("0");
        
        else 
            printf("1");
        mask = mask >> 1;
    }
}

// declaring a function to set three selected bits to 1
void set3bits(unsigned char c, int x, int y, int z){
    int temp;
    temp = (int)pow(2,x) + (int)pow(2,y) + (int)pow(2,z);
    c |= temp;
    intobin(c); 
}

int main(){   
    //reading from standard input the char and the bits that are to be changed
    unsigned char c; 
    int x, y,z; 
    scanf("%c",&c);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    //printing the decimal representation of the read character
    printf("The decimal representation is: %d\n",c); 

    //converting to binary & printing binary representation of the read char
    printf("The binary representation is: "); 
    intobin(c); 
    printf("\n");
    
    //calling the function set3bits to change the bits that are to be changed
    printf("After setting the bits: ");
    set3bits(c, x, y, z); 
    printf("\n");
    return 0; 
}