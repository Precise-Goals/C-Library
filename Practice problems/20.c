#include <stdio.h>

int main()
{
    // Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf("   ");
        }
        for (int j = 0; j <= i; j++) {
            printf(" * ");
        }
        for (int j = 0; j < i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    printf("Axis Line : ");
    int l = 8;
    // l = garbage value
    for (int n = 0; n < l; n++) {
        if (n % 3 == 0) {
            printf(" ");
        }

        printf("-");
    }

    return 0;
}
