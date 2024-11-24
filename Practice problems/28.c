#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int f;
    printf("Enter the initial Value: ");
    scanf("%d", &i);
    printf("Enter the final Value: ");
    scanf("%d", &f);
    while (i < f) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                // printf("%d ", j);
                sum += j;
            }
            // printf("%d ", j);
        }
        if (i == sum) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}