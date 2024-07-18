#include <stdio.h>

int main()
{
    int m[5];
    printf("Enter the Marks of 5 Students: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &m[i]);
    }
    printf("The Marks of Students are\n");
    for (int j = 0; j < 5; j++) {
        printf("The value of Marks at location %d is %d\n", j, m[j]);
    }

    return 0;
}