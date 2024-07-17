#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Value of a: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You Entered One\n");
        break;
    case 2:
        printf("You Entered Two\n");
        break;
    case 3:
        printf("You Entered Three\n");
        break;
    case 4:
        printf("You Entered Four\n");
        break;
    default:
        printf("Default Print\n");
        break;
    }
    return 0;
}