#include <stdio.h>

int main()
{
    /* 1. Write a program to read three integers from a file. */
    FILE* ptr;
    int num;
    ptr = fopen("01.txt", "r");
    for (int i = 0; i < 3; i++) {
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
    }
    fclose(ptr);
    return 0;
}