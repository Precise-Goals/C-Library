#include <stdio.h>

int main()
{
    char a = 'A';
    char* j = &a;

    float k = 7.89;
    float* k1 = &k1;

    // J is the character pointing to a
    // int j has address of variable a
    // Also there exist the address of j too..

    printf("The Element of a is %c\n", a);
    printf("The original Address of a is %p\n", &a);
    printf("The integral Address of a is %u\n", &a);
    printf("The Value at Address of a is %c\n", *(&a));
    // shows value at address
    //  %p original and %u integer
    //  &a has Address of a
    //  address pe store hogye ha
    return 0;
}