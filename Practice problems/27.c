#include <stdio.h>

int main()
{
    // Write a C program to check whether a given number is a 'Perfect' number or not.
    int n, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe Sum of Divisor is %d\n", sum);
    if (n == sum) {
        printf("The Number is Perfect!\n");
    } else {
        printf("The Number is not Perfect!\n");
    }

    return 0;
}