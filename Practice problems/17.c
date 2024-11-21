#include <stdio.h>

int main()
{
    // Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", i + 1);
        }
        printf("\n");
    }

    return 0;
}