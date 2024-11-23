#include <stdio.h>

int main()
{
    // Write a program in C to print Floyd's Triangle.
    int n, flag = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            // series starting from 0
            for (int j = 0; j < i; j++) {
                if (j % 2 == 0) {
                    flag = 0;
                } else {
                    flag = 1;
                }
                printf(" %d ", flag);
            }
        } else if (i % 2 != 0) {
            // series starting from 1
            for (int j = 0; j < i; j++) {
                if (j % 2 != 0) {
                    flag = 0;
                } else {
                    flag = 1;
                }
                printf(" %d ", flag);
            }
        }
        printf("\n");
    }

    return 0;
}