#include <stdio.h>

int main()
{
    int i = 0;
    int num = 0, o;
    do {
        printf("The Value of i is %d\n", i);
        i++;
    } while (i >= 10); // while loop executing at least once...
    // Execute code then checks the condition
    printf("Enter the Number: ");
    scanf("%d", &o);
    do {
        num++;
        printf("The Numbers are: %d\n", num);
    } while (num < o);

    return 0;
}