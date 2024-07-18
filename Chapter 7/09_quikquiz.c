#include <stdio.h>

int main()
{
    int a[3][2], j = 0, k = 0;
    /* : Create a 2-d array by taking input from the user. Write a display function to
print the content of this 2-d array on the screen. */
    printf("Enter the Elements for 3 rows and 2 columns: ");
    while (j < 3) {
        for (int i = 0; i < 2; i++) {
            scanf("%d", &a[j][i]);
        }
        j++;
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        while (k < 2) {
            printf("%d\t", a[i][k]);
            k++;
        }
        k = 0;
        printf("\n");
    }

    return 0;
}