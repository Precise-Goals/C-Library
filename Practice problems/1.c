#include <stdio.h>

int main()
{
    /*
     Write a program in C to display the first 10 natural numbers.
    */
    printf("The first 10 natural numbers are ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", i + 1);
    }

    return 0;
}