#include <stdio.h>

// 1 2 3 4 5 6 7 8 9 .................... n
// 1 2 3 4 5 6 7 8 9 ............... n-1 n
int Summation(int);
int Summation(int o)
{
    if (o == 1) {
        return o;
    }
    return Summation(o - 1) + o;
};

int main()
{
    // Write a recursive function to calculate the sum of first ‘n’ natural numbers.
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    printf("The Sum of n Natural Numbers is %d\n", Summation(n));
    return 0;
}