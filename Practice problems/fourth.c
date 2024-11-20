#include <stdio.h>

int main()
{
    /*
    Write a program in C to read 10 numbers from the keyboard and find their sum and average.
    */
    int sum = 0, n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += (i + 1);
    }
    printf("The sum of %d numbers is %d\n", n, sum);
    printf("The Average of %d numbers is %.2f\n", n, (sum / (float)n));

    return 0;
}