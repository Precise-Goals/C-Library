#include <stdio.h>

int main()
{
    // 1. Write a program to print multiplication table of a given number n
    int num;
    printf("Enter the Number for Multiplication Table: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, (num * i));
    }

    return 0;
}