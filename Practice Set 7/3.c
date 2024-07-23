#include <stdio.h>

int main()
{
    /* 3. Write a program to create an array of 10 integers and store multiplication table of
5 in it. */

    int a[10], temp;
    // int* ptr = &a[0];

    for (int i = 1; i < 11; i++) {
        temp = i * 5;
        a[i] = temp;
        printf("%d ", a[i]);
        // m gonna give this up
    }

    return 0;
}