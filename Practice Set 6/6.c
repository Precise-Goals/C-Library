#include <stdio.h>

int main()
{
    /* 6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable */
    int i = 55;
    int* j = &i;
    int** k = &j;
    printf("The Value of Variable is %d\n", **(k));
    printf("The Value of Variable is %d\n", *(j));
    return 0;
}