#include <stdio.h>

int main()
{
    /*
    Write a program in C to display a pattern like a right angle triangle using an asterisk.
    */
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}