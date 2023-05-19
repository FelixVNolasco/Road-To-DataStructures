/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char xChar = 'x';
    char zChar = 'z';
    
    int xNumber = 1;
    int zNumber = 2;
    
    int arr[2] = {xNumber, zNumber};
    
    char arrChar[2] = {xChar, zChar};

    int (*ptr)[2] = &arr;
    
    char (*ptrChar)[2] = &arrChar;
    
    for(int i = 0; i < 2; i ++){
        printf("%p\n", ptr[i]);    
    }
    
    for(int i = 0; i < 2; i ++){
        printf("%p\n", ptrChar[i]);
    }
    
    for (int i = 0; i < 2; i ++){
        printf("%d\n", arr[i]);
    }
    
    for (int i = 0; i < 2; i ++){
        printf("%c\n", arrChar[i]);
    }
    
    
    
    void changeSecondElement(int *ptr){
        
        *ptr = 15;
        
        printf("%d | %p \n\n", *ptr, ptr );
    }
    
    
    //int f = 10;
    
    //int *fptr = &f;
    
    //changeSecondElement(fptr);
    //printf("%d\n", f);
    
    
    changeSecondElement(ptr[0]);
    
    for (int i = 0; i < 2; i ++){
        printf("%d | %p\n", arr[i], &arr[i]);
    }
    

    return 0;
}
