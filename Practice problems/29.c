#include <math.h>
#include <stdio.h>
int main()
{
    // Write a C program to check whether a given number is an Armstrong number or not.
    int num, og, r, dig = 0;
    float sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    og = num;
    while (num != 0) {
        num /= 10;
        dig++;
    }
    num = og;
    // printf("%d\n", dig);
    while (num != 0) {
        r = num % 10;
        // printf("%d\n", r);
        sum += pow(r, dig);
        // printf("%f\n", pow(r, dig));
        num /= 10;
    }
    if (og == sum) {
        printf("The Number is Armstrong\n");
    } else {
        printf("The Number is not Armstrong\n");
    }

    return 0;
}