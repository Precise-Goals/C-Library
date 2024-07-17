#include <stdio.h>

int main()
{
    int b;
    float a, c;
    a = 9;
    b = 2;
    c = a / b;
    printf("The Value of C is %.2f\n", c);
    /* Demotion example below */
    int i = 5 / 2;
    // 2.5 demoted to 2 due to false declaration
    printf("The value of i is %d", i);
    return 0;
}
/*
  Rules
    int and int → int
    int and float → float
    float and float → float

*/