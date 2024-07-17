#include <stdio.h>

int main()
{
    // 5. Write a program to sum first ten natural numbers using while loop

    int sum = 0, n = 10, m = 1, o = 0;
    while (m < 10) {
        sum += m;
        m++;
    }
    printf("The Sum of First Ten Natural Numbers is %d\n", sum);

    // 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    printf("The Sum of First Ten Natural Numbers is %d\n", sum);
    sum = 0;
    do {
        sum += o;
        o++;
    } while (o < 10);
    printf("The Sum of First Ten Natural Numbers is %d\n", sum);

    return 0;
}