#include <stdio.h>

int main()
{
    // Write a C program to calculate the factorial of a given number
    int n, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("The Factorial of %d is %d\n", n, fact);

    return 0;
}