/* Call by value */
#include <stdio.h>

int sum(int, int);
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("the Sum of is %d\n", sum(4, 5));
    int x = 6, y = 7;
    printf("the Sum of is %d\n", sum(x, y)); // function cant change value of x and y

    return 0;
}