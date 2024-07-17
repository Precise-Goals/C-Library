#include <stdio.h>

void swap(int*, int*);
void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x = 69, y = 96;
    printf("Elements Before Swap : %d %d\n", x, y);
    swap(&x, &y);
    printf("Elements after Swap: %d %d\n", x, y);
    return 0;
}