/* 
CH-230-A
a2_p3.c
Suraj Giri
s.giri@jacobs-university.de
*/
 #include<stdio.h>
 int main()
 {
     int week_var;
     int days_var;
     int hours_var;
     scanf("%d", &week_var);
     getchar();
     scanf("%d", &days_var);
     getchar();
     scanf("%d", &hours_var);
     int total_hrs = (week_var*7*24) + (days_var*24) + hours_var;
     printf("Total hours = %d hours\n", total_hrs);
     return 0;
 }