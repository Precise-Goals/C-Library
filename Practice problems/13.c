#include <stdio.h>

int main()
{
    // Write a program in C to make a pyramid pattern with numbers increased by 1.
    int n, a = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}