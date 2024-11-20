#include <stdio.h>

int main()
{
    /*
    Write a program in C to display the multiplier table vertically from 1 to n.
    */
    int n;
    printf("Enter the number from 1 : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d * %d = %d               " , j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}