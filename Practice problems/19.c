#include <stdio.h>

int main()
{
    // Write a program in C to display the n terms of a harmonic series and their sum.
    int n;
    float sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++) {
        sum += (1 / i);
    }
    printf("The Sum of the series is : %f\n", sum);

    return 0;
}