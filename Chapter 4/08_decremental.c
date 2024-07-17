#include <stdio.h>

int main()
{
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);
    for (int i = num; i; i--) {
        printf("The Reverse Order Natural Numbers are %d \n", i);
    }
    return 0;
}