#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Write a program to create an array of size n using calloc where n is an
integer entered by the user. */
    int n;
    scanf("%d", &n);
    int* ptr;
    // malloc me garbage value chali jati when not initialised
    ptr = (int*)calloc(n, sizeof(int));
    // allocates contiguous space in memory for n blocks (floats)
    ptr[0] = 333;
    ptr[1] = 983;
    ptr[2] = 245;
    ptr[3] = 375;
    ptr[4] = 643;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);

    return 0;
}