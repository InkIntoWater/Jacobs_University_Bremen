/* 
CH-230-A
a7_p3.c
Suraj Giri
s.giri@jacobs-university.de
*/

#include"linked_list.h"

//main function
int main(){
    
    int x, y, z;
    z = 1;
    //int quit = 1;
    char c;
    scanf("%c", &c);
    //creating an infinite loop until we provide the swaitch case to quit
    while(z==1){
        switch (c){
            
            //'a' - add the following number at the end of the list
            case 'a':
                scanf("%d", &x);
                add_at_end(x);
                break;

            //'b' - add the following number at the beginning of the list
            case 'b':
            //int o;
                scanf("%d", &y);
                add_at_beginning(y);
                break;

            //'r' - remove the first element from the list
            case 'r':
                delete_first_element();
                break;
            
            //'p' - print the list
            case 'p':
                print_list();
                break;

            //'q' - free the meomry and quit the execution
            case 'q':
                free_n_quit();
                z = 0;
                break;
        }
    scanf("%c", &c);
    }   
    return 0;
}