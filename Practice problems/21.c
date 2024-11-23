#include <math.h>
#include <stdio.h>
int main()
{
    // . Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
    // 10^1 - 1 + 10^2 - 1 + 10^3 -1
    int n;
    float sum = 0.0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (pow(10, i) - 1);
        printf("%.0f ", (pow(10, i) - 1));
    }
    printf("\nThe Sum of the Series is %f\n", sum);

    return 0;
}