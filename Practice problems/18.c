#include <math.h>
#include <stdio.h>

int fact(int a)
{
    if (a == 1 || a == 0) {
        return 1;
    }
    return a * fact(a - 1);
}

int main()
{
    // Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
    // Cos x =  1-X^2/2!+X^4/4
    int n, x;
    float sum = 1.0;
    printf("Input the Number of terms: ");
    scanf("%d", &n);
    printf("Input Value of x: ");
    scanf("%d", &x);
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            sum += (pow(x, 2 * i)) / fact(2 * i);
        } else {
            sum -= (pow(x, 2 * i)) / fact(2 * i);
        }
    }
    printf("The Sum of Series: %f\n", sum);
    printf("The Value of x: %d\n", x);

    return 0;
}