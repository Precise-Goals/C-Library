#include <stdio.h>
int Average(int, int, int);
int Average(int m, int n, int o)
{
    printf("The Average of Three Numbers Are %d\n", ((m + n + o) / 3));
};

int main()
{
    // Write a program using function to find average of three numbers.
    int a, b, c;
    printf("Enter The Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    Average(a, b, c);
    return 0;
}