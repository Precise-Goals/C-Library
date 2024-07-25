
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
    free(ptr);
    ptr = (float*)realloc(ptr, (n + 6) * sizeof(float));
    printf("%.2f\n", ptr[0]);
    free(ptr);
    return 0;
}
