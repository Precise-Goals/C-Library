#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float* ptr;
    malloc me garbage value chali jati when not initialised 
    ptr = (float*)malloc(n * sizeof(float));

    ptr[0] = 333;
    ptr[1] = 983;
    ptr[2] = 245;
    ptr[3] = 375;
    ptr[4] = 643;

    printf("%.0f\n", ptr[0]);
    printf("%.0f\n", ptr[1]);
    printf("%.0f\n", ptr[2]);
    printf("%.0f\n", ptr[3]);
    printf("%.0f\n", ptr[4]);

    return 0;
}