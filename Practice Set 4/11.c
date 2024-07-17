#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    while (i < n) {
        if (n % i == 0 && n != 2) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag) {
        printf("%d is not Prime Number\n", n);
    } else {
        printf("%d is the Prime Number\n", n);
    }

    return 0;
}