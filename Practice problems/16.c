#include <stdio.h>

int main()
{
    // Write a C program to display the sum of n terms of even natural numbers.
    int n, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", 2 * i);
        sum += i * 2;
    }

    printf("The sum of %d even numbers is %d\n", n, sum);
    return 0;
}