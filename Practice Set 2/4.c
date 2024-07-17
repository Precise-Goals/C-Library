/* Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 */
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    printf("Value of expression is %f \n", 3 * x / y - z + k);

    return 0;
}
/*
3*x is leftmost and having high priority operator
then 3*x /y as its too high priority than - and +
let 3*x/y = g then g-z will evaluate first let it be h
then h+k will evaluate answer is let j
*/