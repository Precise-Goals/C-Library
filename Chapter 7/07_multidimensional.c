#include <stdio.h>

int main()
{
    int arr[3][2] = { { 1, 4 }, { 7, 9 }, { 11, 22 } };
    // form a matrix using multidimensional array
    // for 3 rows and 2 columns
    printf("Give Matrix for 3 rows and 2 Columns\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // for 2 Rows and 3 columns
    printf("Give Matrix for 2 rows and 3 Columns\n");
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 3; b++) {
            printf("%d ", arr[b][a]);
        }
        printf("\n");
    }

    return 0;
}