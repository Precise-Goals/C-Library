#include <stdio.h>

int main()
{
    /* 2. Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.*/
    int n;
    FILE* mul;
    mul = fopen("02.txt", "w");
    printf("Enter the Number for Table : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        fprintf(mul, "%d * %d = %d\n", n, i, (n * i));
    }
    fclose(mul);
    return 0;
}