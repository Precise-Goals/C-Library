#include <stdio.h>

int main()
{
    int a = 563;
    int* j = &a;
    
    // J is the integer pointing to a
    // int j has address of variable a
    // Also there exist the address of j too..

    printf("The original Address of a is %p\n", &a);
    printf("The integral Address of a is %u\n", &a);
    printf("The Value at Address of a is %d\n", *(&a));
    // shows value at address
    //  %p original and %u integer
    //  &a has Address of a
    //  address pe store hogye ha
    return 0;
}