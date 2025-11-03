#include <conio.h>
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void main()
{
    int customers[] = { 67, 56, 45, 86, 54, 22, 34, 12, 14, 78, 9 };
    int n = sizeof(customers) / sizeof(customers[0]);
    int keyToFind;
    int result;

    // clrscr();

    printf("Enter the key to find: ");
    scanf("%d", &keyToFind);

    result = linearSearch(customers, n, keyToFind);

    if (result == -1) {
        printf("\nID %d was NOT found.\n", keyToFind);
    } else {
        printf("\nID %d was FOUND at index %d.\n", keyToFind, result);
    }

    keyToFind = 100;
    result = linearSearch(customers, n, keyToFind);

    if (result == -1) {
        printf("\nID %d was NOT found.\n", keyToFind);
    } else {
        printf("\nID %d was FOUND at index %d.\n", keyToFind, result);
    }

    printf("\nPress any key to exit...");
    getch();
}