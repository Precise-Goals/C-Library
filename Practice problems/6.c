#include <stdio.h>

int main()
{
    /*
    Write a program in C to display the multiplication table for a given integer.
    */
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}