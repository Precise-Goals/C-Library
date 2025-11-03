#include <conio.h>
#include <stdio.h>

void LinearSearch(int customers[], int n, int t)
{
    int i;
    for (i = 0; i < n; i++) {
        if (customers[i] == t) {
            printf("Customer ID is found at position %d", i);
            return;
        }
    }
    printf("Customer Id Not Found");
    return;
}

void main()
{
    int customers[] = { 67, 56, 45, 86, 54, 22, 34, 12, 14, 78, 9 };
    int n = sizeof(customers) / sizeof(customers[0]), t;
    printf("Enter the Customer ID to Search: ");
    scanf("%d", &t);
    LinearSearch(customers, n, t);
    getch();
}