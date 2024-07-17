#include <stdio.h>

int main()
{
    int age = 5;
    if (age > 10)
    {
        printf("Your age is Greater than 10\n");
    }
    if (age % 5 == 0)
    {
        printf("You are in parity Gang\n");
    }
    return 0;
}
/*
Relational operators are used to evaluate conditions (true or false) inside the if
statements.
Some examples of relational operators are:
==, >=, >, <, <=, !=
Important note: ‘=’ is used for assignment
whereas ‘==’ is used for equality check.
The condition can be any valid expression. In C a non-zero value is considered to be
true.
*/