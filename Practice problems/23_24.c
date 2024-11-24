#include <math.h>
#include <stdio.h>
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
        int po = ((2 * i) + 1);
        if (i % 2 == 0) {
            sum += (pow(x, po));
        } else {
            sum -= (pow(x, po));
        }
        printf("Term %d: %.2f\n", i + 1, (pow(x, po)));
    }
    printf("The Sum of the series is %f\n", sum);

    return 0;
}