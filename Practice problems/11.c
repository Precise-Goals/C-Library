#include <stdio.h>

int main()
{

    // Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" %d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}