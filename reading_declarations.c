#include <stdio.h>

int main()
{
    int x = 5;
    const int y = 6;

    int *ptr1 = &x;
    const int *ptr2 = &y;
    int *const ptr3 = &x;
    const int *const ptr4 = &y;

    //ptr1 is a pointer(*) to int
    //it can point to x, but can not point to y because y is not int, it is const int
    //the type of the pointer must match the type of the variable
    //ptr1 can point to a different variable
    //the variable ptr1 points to can be changed

    //ptr2 is a pointer(*) to const in
    //it can point to y, but can not point to x because x is int, not const int

    //the line below will result in a compilation error, because ptr2 points to a
    //constant variable and can not be changed
    //*ptr2 = 7;

    //however, ptr2 itself can be made to point to another variable
    //the lines below will compile fine
    //const int p = 44;
    //ptr2 = &p;

    //ptr3 is a constant pointer(const *) to int
    //it can not point to another variable, because it is constant
    //the lines below will result in a compilation error(we try to make ptr3 point to z)
    //int z = 11;
    //ptr3 = &z;

    //howerver, we can change x thru ptr3. the line below will set x to 122
    //*ptr3 = 122;

    //ptr4 is a constant pointer(*) to a constant int(const int)
    //ptr4 can not be made to point to another variable because it is constant
    //the variable that ptr4 points to cannot be changed, as it is constant
    //the lines below result in a compilation error
    //const int w = 20;
    //ptr4 = &w; //make ptr4 point to something else
    //*ptr4 = 999; //change the variable ptr4 points to

    return 0;
}