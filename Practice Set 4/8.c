#include <stdio.h>

int main()
{
    // 9. Repeat 8 using while loop.
    int i = 1, n, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    while (i <= n) {
        fact *= i;
        i++;
    }
    printf("The Factorial of %d is %d\n", n, fact);

    return 0;
}