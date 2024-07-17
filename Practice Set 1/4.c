#include <stdio.h>

int main()
{
    int P, N, R;
    printf("Enter the Principal Amount: ");
    scanf("%d", &P);
    printf("Enter the Number of Years: ");
    scanf("%d", &N);
    printf("Enter the Rate of Interest: ");
    scanf("%d", &R);
    printf("The Simple Interest on Given Data: %d\n", ((P * N * R)/100));
    printf("Total Payable Amount after %d Years with %d Rate of Interest: %d", N, R, (P + ((P * N * R)/100)));
    return 0;
}