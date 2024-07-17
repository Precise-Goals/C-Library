#include <stdio.h>

/*
    1. Write a program to print the address of a variable. Use this address to get the
    value of the variable.
*/

int main()
{
    int a = 76;
    printf("The Address of the Variable is %p\n", &a);
    printf("The Address of the Variable is %d\n", *(&a));
    return 0;
}