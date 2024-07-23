#include <stdio.h>

int main()
{
    /* 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/
    // easy shit

    int a[5] = { 1, 3, 5, 7, 9 };
    int* ptr = &a[0];
    printf("The element at first place is %d with location %d\n", *ptr, ptr);
    ptr += 2;
    printf("The element at first place is %d with location %d\n", *ptr, ptr);

    // teri zulfo ki ye nami ✅✅✅

    return 0;
}