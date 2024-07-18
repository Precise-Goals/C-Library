#include <stdio.h>

int main()
{
    int marks[90]; // 90 no of integers can be Fitted...
    // range is 0 to 89
    // marks 90 means 90 elements,
    // arrays start from zeroth index

    marks[0] = 45;
    marks[1] = 98;
    printf("Marks 0 and Marks 1 are %d and %d respectively\n", marks[0], marks[1]);
    return 0;
}