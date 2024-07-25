#include <stdio.h>

typedef struct Vector {
    int i;
    int j;
} vec;

int main()
{
    // 1. Create a two-dimensional vector using structures in C.
    vec v = { 4, 5 };
    printf("THe Vector v is %di+%dj\n", v.i, v.j);

    return 0;
}