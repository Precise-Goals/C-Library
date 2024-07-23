#include <stdio.h>

void printArray(int a[], int n)
{
    for (int j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");
}

void Reverse(int arr[], int n)
{
    /*
     from 0 to n/2 i had to swap i with n-i
     for ex 20 array then
     from0 to 10 i swap with 20-i
     */
    int temp;
    for (int h = 0; h < n / 2; h++) {
        temp = arr[h];
        arr[h] = arr[n - h - 1];
        arr[n - h - 1] = temp;
        // this is where i fcked up "-1"
    }
}

int main()
{
    /* 5. Write a program containing a function which reverses the array passed to it. */
    int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    printf("Before Reverse\n");
    printArray(a, 8);
    Reverse(a, 8);
    printArray(a, 8);
    return 0;
}