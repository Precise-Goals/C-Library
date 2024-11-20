#include <stdio.h>

int main()
{
    /*
    Write a program in C to display n terms of natural numbers and their sum.
    */
    int n, sum = 0;
    printf("Enter the Number (n) : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += (i + 1);
    }
    printf("The Sum of first %d numbers is %d", n, sum);

    return 0;
}