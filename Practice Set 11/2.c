#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
make it store 15 number (from 7 x 1 to 7 x 15).*/
    int n = 10;
    int* ptr;
    ptr = (int*)malloc(n * sizeof(int));
    printf("\n");
    for (int j = 0; j < n; j++) {
        ptr[j] = (j + 1) * 7;
        printf("7 x %d = %d\n", j + 1, ptr[j]);
    }
    // free(ptr);
    ptr = (int*)realloc(ptr, (15) * sizeof(int));
    int a = n + 5;
    for (int b = 10; b < a; b++) {
        ptr[b] = (b + 1) * 7;
        printf("7 x %d = %d\n", b + 1, ptr[b]);
    }
    free(ptr);
    return 0;
}