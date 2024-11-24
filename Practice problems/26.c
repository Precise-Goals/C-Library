#include <math.h>
#include <stdio.h>
int main()
{
    // Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
    // 10+ 1
    int n, a = 1;
    float sum = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        printf("%d ", a);
        if (i < (n - 1)) {
            printf("+ ");
        }
        sum += a;
        a = (a * 10) + 1;
    }
    printf("\nThe Sum of the Series is %f\n", sum);

    return 0;
}