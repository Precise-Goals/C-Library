#include <math.h>
#include <stdio.h>
int main()
{
    // Write a C program that displays the n terms of square natural numbers and their sum.
    // 1 4 9 16 ... n Terms
    int n;
    float sum;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow(i, 2);
        printf("Term %d = %f\n", i, pow(i, 2));
    }
    printf("The Sum of series is %f\n", sum);

    return 0;
}