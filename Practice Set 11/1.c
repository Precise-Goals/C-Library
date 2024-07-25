#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Write a program to dynamically create an array of size 6 capable of storing 6
integers. */
    /* Use the array in problem 1 to store 6 integers entered by the user. */
    /* 3. Solve problem 1 using calloc(). */
    int n = 6;
    int* ptr;
    ptr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    for (int j = 0; j < n; j++) {
        printf("%d\n", ptr[j]);
    }
    // free(ptr);
    ptr = (int*)realloc(ptr, (n + 4) * sizeof(int));
    ptr[7] = 907;
    printf("%d", ptr[7]);
    free(ptr);
    return 0;
}