#include <stdio.h>

int address(int* pt)
{
    printf("The Address of the Variable is %p\n", pt);
    printf("The Value at the Variable is %d\n", *(pt));
}

int main()
{
    /*
    2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
        a function and print its address. Are these addresses same? Why?
    */
    int i = 76;
    int* ptr = &i;
    printf("The Address of the Variable is %p\n", &i);
    address(&i);

    return 0;
}