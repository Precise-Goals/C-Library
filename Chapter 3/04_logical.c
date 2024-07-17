#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    printf("The AND operation of a and b is %d\n", a && b);
    printf("The AND operation of a and b is %d\n", !a && b);
    printf("The OR operation of a and b is %d\n", a || b);
    printf("The NOT operation on a is %d\n", !a);
    if (a && b)
    {
        printf("Both a and b are True\n");
    }
    else
    {
        printf("Any one of a and b are False\n");
    }
    if (a)
    {
        if (b)
        {
            printf("Both a and b are True\n"); // non zero rule
        }
        else
        {
            printf("b is false\n");
        }
    }
    else
    {
        printf("a is False\n");
    }

/*
Priority Operator
 1st      !
 2nd      *, /, %
 3rd      +, -
 4th      <>, <=, >=
 5th      ==, !=
 6th      &&
 7th      ||
 8th      =
*/

    return 0;
}