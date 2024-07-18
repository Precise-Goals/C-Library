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
        printf("The value of Marks at location %d is %u\n", j, &m[j]);
    }

    // address stored in linear manner having the difference of x amt of bytes
    // data type has
    // if starting from 64...276, ...280, ... 284, ...288, ..292,...296,...300..

    return 0;
}