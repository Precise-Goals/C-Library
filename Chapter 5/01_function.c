#include <stdio.h>
int sum(int, int); // function Prototype Good Practice
int sum(int x, int y) // function Definition x and y are parameters
{
    printf("The Sum is %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1, b = 3;
    int c = a + b;
    printf("The sum is %d\n", c);

    int a1 = 3, b1 = 13;
    int c1 = a1 + b1;
    printf("The sum is %d\n", c1);

    // mess up if you repeting this in larger scale

    int d = sum(a, b);
    printf("The sum is %d\n", d);

    sum(5, 6); // | Function Call // arguments
    sum(a1, b1); // | Function Call // arguments
    sum(a, b); // | Function Call

    return 0;
}