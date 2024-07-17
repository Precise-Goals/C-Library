/* Call by value */
#include <stdio.h>

int sum(int*, int*);

// try to change the value of x

int sum(int* a, int* b)
{
    *a = 1;
    return *a + *b;
}

int main()
{
    int x = 6, y = 7;
    printf("the Sum of is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);

    return 0;
}