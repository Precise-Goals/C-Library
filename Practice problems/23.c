#include <math.h>
#include <stdio.h>
int fact(int a)
{
    if (a == 0 || a == 1) {
        return 1;
    }

    return a * (a - 1);
}
int main()
{
    // Write a program in C to find the sum of the series [x - x^3 + x^5 + ......].
    // sin taylor
    int n, x;
    float sum;
    printf("Enter the Number of terms: ");
    scanf("%d", &n);
    printf("Input the Value of x: ");
    scanf("%d", &x);
    sum = (float)x;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += (pow(x, ((2 * i) + 1)));
        } else {
            sum -= (pow(x, ((2 * i) + 1)));
        }
    }
    printf("The Sum of the series is %f\n", sum);

    return 0;
}