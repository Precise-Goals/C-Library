#include <stdio.h>

int main()
{
    /*
    7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. 
    (consider 8 x 1 to 8 x 10).
    */
    int sum = 0, n = 8;
    for (int i = 1; i <= 10; i++) {
        sum += n * i;
    }
    printf("The Sum of Multiplications in %d's Table is %d\n", n, sum);
    return 0;
}