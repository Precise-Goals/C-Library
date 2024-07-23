#include <stdio.h>

int ntaInvigilator(int arr[], int n)
{
    int count;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        } else {
            continue;
        }
    }
    printf("The Number of Positive integers in Array is %d\n", count);
    return count;
}

int main()
{
    /* 6. Write a program containing functions which counts the number of positive
integers in an array. */
    int a[5] = { -1, 2, -69, 420, 12 };
    ntaInvigilator(a, 5);
    return 0;
}