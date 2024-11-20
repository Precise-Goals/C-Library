#include <math.h>
#include <stdio.h>

int main()
{
    /*
    Write a program in C to display the cube of the number up to an integer.
    */
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("The Cube of %d is %.2f\n", (i + 1), pow((i + 1), 3));
    }

    return 0;
}