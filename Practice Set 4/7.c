#include <stdio.h>

int main()
{
    // 8. Write a program to calculate the factorial of a given number using a for loop
    // 1 , 1*2 , 2*3, 3*4
    int n, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("The Factorial of %d is %d\n", n, fact);
    return 0;
}