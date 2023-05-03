#include <stdio.h>

int main()
{
    int i = 15;
    char j = 'H';

    int *intPtr = &i;
    char *charPtr = &j;


    printf("#### VARIABLE LOCATION #### \n");
    printf("i address location: %p\n", &i);
    printf("j address location: %p\n\n", &j);


    printf("#### i VARIABLE CHANGE #### \n");
    printf("i  = %d\n", *intPtr); //reading from i through  the pointer
    *intPtr = 100;                //writing to i through  the pointer
    printf("i =  %d\n\n", i);       //check if we really changed i? Yes, we did!


    printf("#### j VARIABLE CHANGE #### \n");
    printf("j  = %c\n", *charPtr); //reading from i through  the pointer
    *charPtr = 'F';                //writing to i through  the pointer
    printf("j =  %c\n\n", j);       //check if we really changed i? Yes, we did!
    

    printf("#### VARIABLE LOCATION #### \n");
    printf("i address location: %p\n", &i);
    printf("j address location: %p\n", &j);

    return 0;
}