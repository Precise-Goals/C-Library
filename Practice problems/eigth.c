#include <stdio.h>

int main()
{
    /*
    Write a C program to display the n terms of odd natural numbers and their sum.
    */
    int n, sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("The Odd Numbers are : ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", ((2 * i) + 1));
        sum += ((2 * i) + 1);
    }
    printf("\n");
    printf("The sum of first %d Odd numbers is %d\n", n, sum);

    return 0;
}