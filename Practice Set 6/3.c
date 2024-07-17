#include <stdio.h>

void adrr(int a)
{
    printf("The 10 times of %d is %d\n", a, 10 * a);
}

int main()
{
    /*
    3. Write a program to change the value of a variable to ten times of its current
value
    */
    int h = 5;
    printf("The Value of variable is %d\n", h);
    adrr(*(&h));
    return 0;
}