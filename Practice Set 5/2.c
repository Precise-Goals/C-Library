#include <stdio.h>

float Convertion(int);
float Convertion(int a)
{
    return (9.0 * a / 5.0) + 32;
};

int main()
{
    // Write a function to convert Celsius temperature into Fahrenheit
    int c;
    float F;
    printf("Enter the Temperature(in C) : ");
    scanf("%d", &c);
    F = Convertion(c);
    printf("The Temperature in F is %.2f\n", F);
    return 0;
}