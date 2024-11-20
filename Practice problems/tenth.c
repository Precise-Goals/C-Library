#include <stdio.h>

int main()
{
    /*
    Write a C program to display a pattern like a right angle triangle with a number
    */
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" %d ", i + 1);
        }
        printf("\n");
    }

    return 0;
}