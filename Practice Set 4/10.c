#include <stdio.h>

int main()
{
    //     11. Implement 10 using other types of loops.
    //     10. Write a program to check whether a given number is prime or not using loops.
    int n, i = 2, flag = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    do {
        if (n % i == 0 && n != 2) {
            flag = 1;
            break;
        }
        i++;
    } while (i < n);
    if (flag) {
        printf("%d is Not Prime Number. \n", n);
    } else {
        printf("%d is the Prime Number. \n", n);
    }

    return 0;
}