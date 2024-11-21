#include <stdio.h>

int main()
{
    // Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j >= 0; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}