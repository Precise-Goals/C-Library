#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year to check whether it's a leap year or not: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is not a Leap Year\n", year);
    }

    return 0;
}
