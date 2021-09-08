/* 
CH-230-A
a3_p5.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    //Taking Input from the Keyboard
    char c;
    printf("Enter the chahracter c: \n");
    scanf("%c", &c);
    int n;
    printf("Enter the value for integer n: \n");
    scanf("%d", &n);
    double celcius[n];
    double sum = 0 , mean = 0; 
    //Declaring the function for sum and mean
    for(int idx = 0; idx < n; idx++){
        printf("Enter the value of the temperature: ");
        scanf("%lf", &celcius[idx]);
        sum = sum + celcius[idx];
        mean = sum / n;
    }
    
     //Using Switch for the character
    switch (c){
        case 's':
            printf("the sum of temperatures: %lf\n", sum);
            break;

        case 'p':
            for (int idx = 0; idx < n; idx++)
            {
                printf(" List of all temperatures: %lf\n", celcius[idx]);
            }
            break;

        case 't':
            for (int idx = 0; idx < n; idx++)
            {
                printf("the list of all temperatures in Fahrenheit: %lf\n", (celcius[idx] * 9 / 5) + 32); //Converting the temperatures into Fahrenheit.
            }
            break;

        default:
            printf("the average arithmetic mean of all temperature: %lf\n", mean);
    }
    return 0;
}
