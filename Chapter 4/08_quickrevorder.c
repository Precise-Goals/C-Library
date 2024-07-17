#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("The Reverse Order: %d\n", n - i);
    }

    return 0;
}