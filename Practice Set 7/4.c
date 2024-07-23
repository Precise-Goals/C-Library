#include <stdio.h>

int main()
{
    /* 3. Write a program to create an array of 10 integers and store multiplication table of
5 in it.
4. Repeat problem 3 for a general input provided by the user using scanf. */

    int a[10], n;

    printf("Enter the Multiplier : ");
    scanf("%d", &n);
    printf("Enter the 10 Inputs : \n");
    for (int b = 0; b < 10; b++) {
        printf("Enter the input %d = ", b + 1);
        scanf("%d", &a[b]);
    }
    for (int i = 1; i < 11; i++) {
        a[i] = i * n;
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}