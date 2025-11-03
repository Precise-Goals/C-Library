#include <conio.h>
#include <stdio.h>

void Sort(int* customers, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = customers[i];
        j = i - 1;
        while (j >= 0 && customers[j] > key) {
            customers[j + 1] = customers[j];
            j = j - 1;
        }
        customers[j + 1] = key;
    }
}

void printArr(int customers[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", customers[i]);
    }
    printf("\n");
}

void main()
{
    int customers[] = { 67, 56, 45, 86, 54, 22, 34, 12, 14, 78, 9 };
    int n = sizeof(customers) / sizeof(customers[0]);
    printArr(customers, n);
    Sort(customers, n);
    printArr(customers, n);
    getch();
}