
// Write a program to demonstrate the usage of free() with malloc().
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float* ptr;
    // malloc me garbage value chali jati when not initialised
    ptr = (float*)malloc(n * sizeof(float));

    ptr[0] = 333.22;
    ptr[1] = 983.22;
    ptr[2] = 245.22;
    ptr[3] = 375.22;
    ptr[4] = 643.22;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);

    free(ptr);
    return 0;
}
