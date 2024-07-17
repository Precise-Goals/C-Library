#include <stdio.h>

int main()
{
    int Radius, Height;
    printf("Enter the Radius: ");
    scanf("%d", &Radius);
    printf("Enter the Height: ");
    scanf("%d", &Height);
    printf("The Area of Circle with Radius %d is %f\n", Radius, Radius * Radius * 3.14); // float lagna tha yaha %f
    printf("The Cylinder having Radius: %d Height: %d has %f squnit Area", Radius, Height, 3.14 * Radius * Radius * Height);
    return 0;
}