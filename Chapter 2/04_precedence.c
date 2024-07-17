#include <stdio.h>

int main()
{
    int x = 4;
    int y = 4;
    int z = 4;
    int Q = x * y - 3 * z;
    printf("Value of Q is %d\n", Q);
    return 0;
}
/*
Priority
1.  %/*
2.  +-
3.  =

use Paranthesis

Associativity
x*y/z ---> (x*y)/z
x/y*z ---> (x/y)*z
left to right approach.
*/