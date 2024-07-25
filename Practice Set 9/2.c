#include <stdio.h>

typedef struct Vector {
    int i;
    int y;
} vec;

vec sumVector(vec a, vec b)
{
    vec c = { a.i + b.i, a.y + b.y };
    return c;
}

int main()
{
    /* 1. Create a two-dimensional vector using structures in C.
       2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
       The vectors must be two–dimensional */
    vec v1 = { 5, 6 };
    vec v2 = { 3, 8 };
    printf("The Resultant vector is %di+%dy\n", sumVector(v1, v2).i, sumVector(v1, v2).y);

    return 0;
}