#include <stdio.h>

int main()
{
    // 10. Write a program to check whether a given number is prime or not using loops.
    int n, flag = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0 && n != 2) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("%d is Not Prime Number. \n", n);
    } else {
        printf("%d is the Prime Number. \n", n);
    }

    return 0;
}