#include <stdio.h>

int main()
{
    // Print the Matrix of 5 Rows and 4 Columns
    int err[5][4];
    printf("The Matrix for 5 Rows and 4 Columns\n");
    printf("Enter the Multidimensional Matrix for 5 rows and 4 Columns: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d ", &err[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", err[i][j]);
        }
        printf("\n");
    }

    return 0;
}