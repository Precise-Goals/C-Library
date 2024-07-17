#include <stdio.h>

void tent(int);
void tent(int a)
{
    printf("The 10 times of %d i %d\n", a, 10 * a);
};

int main()
{
    /* 3. Write a program to change the value of a variable to ten times of its current value */
    /* 7. Try problem 3 using call by value and verify that it does not change the value of the said variable. */
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);

    tent(x);
    return 0;
}