#include <stdio.h>

int main()
{
    // 2. Write a program to print multiplication table of 10 in reversed order.
    int n;
    printf("Enter the Number for Reversed Table: ");
    scanf("%d", &n);

    for (int i = 10; i > 0; i--) {
        printf("%d * %d = %d\n", n, i, (n * i));
    }

    return 0;
}