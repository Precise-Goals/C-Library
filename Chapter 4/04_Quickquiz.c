#include <stdio.h>

int main()
{
    /*
    Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0. The loop counter need not be int, it can be float as well.
    */
    int i = 0;
    float num = 0.0;
    float c = 0.0;
    printf("Solution I Solved for Above Problem\n");
    while (c <= 10) {
        num = c + 10;
        printf("The Given Natural Number is %.2f\n", num);
        c++;
    }
    printf("Solution Carry given for Above Problem\n");
    while (i <= 20) {
        if (i >= 10) {
            printf("The Given Natural Number is %d\n", i);
        }
        i++;
    }

    return 0;
}