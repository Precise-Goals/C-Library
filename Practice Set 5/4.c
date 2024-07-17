#include <stdio.h>

int fibonacci(int);
int fibonacci(int f)
{
    if (f == 2 || f == 1) {
        return f - 1;
    }
    return fibonacci(f - 1) + fibonacci(f - 2);
}

int main()
{
    // Write a program using recursion to calculate nth element of Fibonacci series.
    // 0,1,1,2,3,5,8,1 3,21,34,55
    // 0 + 1 = 1
    // n-2 + n-1 = n
    int n;
    printf("Enter the nth Number for fibo series: ");
    scanf("%d", &n);
    printf("The Number for %d's place is %d\n",n, fibonacci(n));
    return 0;
}