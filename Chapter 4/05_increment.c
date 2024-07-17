#include <stdio.h>

int main()
{
    int i = 5;
    printf("The Value of i is %d\n", i);

    i = i + 5;
    printf("The Value of i is %d\n", i);

    printf("The Value of i is %d\n", ++i); // first increment then print i
    // PreIncrement Operator

    printf("The Value of i is %d\n", i++); // print i then increments
    // PostIncrement Operator

    i += 4; // i = i + 4
    printf("The Value of i is %d\n", i++); // print i then increments
    // Compound Assignment Operator



/*  More Compound Assignment Operator
    a += b   # a = a + b
    a -= b   # a = a - b
    a *= b   # a = a + b
    a /= b   # a = a / b
    a %= b   # a = a % b
    a //= b  # a = a // b
    a **= b  # a = a ** b
    a &= b   # a = a & b
    a |= b   # a = a | b
    a ^= b   # a = a ^ b
    a >>= b  # a = a >> b
    a <<= b  # a = a << b
*/
    return 0;
}