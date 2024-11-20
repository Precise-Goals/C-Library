#include <stdio.h>

int main()
{
    /*
     Write a C program to compute the sum of the first 10 natural numbers.
    */
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += (i + 1);
    }
    printf("the Sum of first 10 natural numbers is %d\n", sum);

    return 0;
}