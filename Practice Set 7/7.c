#include <stdio.h>

int main()
{
    /* 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively. Repeat problem for a custom input given by the user */
    int arr[3][10];
    int n1, n2, n3;
    int mul[] = { n1, n2, n3 };

    for (int a = 0; a < 3; a++) {
        printf("Enter the Number : ");
        scanf("%d", &mul[a]);
    }

    for (int i = 0; i < 3; i++) { // main arr
        for (int j = 0; j < 10; j++) { // plier arr
            arr[i][j] = (j + 1) * (mul[i]);
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d : ", mul[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}