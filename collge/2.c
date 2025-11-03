#include <conio.h>
#include <stdio.h>

void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int salary[] = { 45000, 60000, 30000, 80000, 50000, 25000, 35000, 20000, 22000, 75000, 15000 };
    int n = sizeof(salary) / sizeof(salary[0]);

    clrscr();

    printf("--- 1. Bubble Sort (Salary Array) ---\n");

    printf("Original salary array: \n");
    printArr(salary, n);

    bubbleSort(salary, n);

    printf("\nSorted salary array: \n");
    printArr(salary, n);

    printf("\nPress any key to exit...");
    getch();
}