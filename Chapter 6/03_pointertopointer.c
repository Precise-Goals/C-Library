#include <stdio.h>

int main()
{
    int i = 32;
    int* j = &i;
    int** k = &j; // address of Variable having address of an elements

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", **k);

    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", *(&*(&i)));
    printf("The value of i is %d\n", **(&j));
    // *(&j) broke down to j and j is &i and it further brokedown to i

    return 0;
}