#include <stdio.h>
/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:
    Income Slab    Tax
    2.5 – 5.0L     5%
    5.0L - 10.0L   20%
    Above 10.0L    30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.

*/

int main()
{
    int Income;
    float Tax;
    printf("Enter your Income ");
    scanf("%d", &Income);
    if (Income > 250000 && Income <= 500000) {
        Tax = 0.05 * (Income - 250000);
        printf("Your Income Tax Is %.2f\n", Tax);
    } else if (Income > 500000 && Income <= 1000000) {
        Tax = 0.05 * (500000 - 250000) + 0.20 * (Income - 500000);
        printf("Your Income Tax Is %.2f\n", Tax);
    } else if (Income > 1000000) {
        Tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.30 * (Income - 1000000);
        printf("Your Income Tax Is %.2f\n", Tax);
    } else if (Income >=1000 && Income <= 5000) {
        printf("Duffer, Pocket Money is not consider as Income\n");
    } else {
        printf("Income Tax Cannot be Applied\n");
    }
    return 0;
}