#include <stdio.h>

void func(int* a, int* b)
{
    printf("The Sum of Two Numbers is %d\n", *a + *b);
    printf("The Average of Two Numbers is %d\n", (*a + *b) / 2);
}

int main()
{
    /* 5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main(). */
    int x, y;
    printf("Enter the two Numbers : ");
    scanf("%d %d", &x, &y);

    func(&x, &y);
    return 0;
}