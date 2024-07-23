#include <stdio.h>

int main()
{
    char* ptr = "Engineer";
    /*  1. Once a string is defined using char st [] = “harry”, it cannot be reinitialized to
            something else.
        2. A string defined using pointers can be reinitialized.
            ptr = "Rohan";*/
    printf("String Before Change - %s\n", ptr);
    ptr = "Doctor";
    printf("String After Change - %s\n", ptr);
    return 0;
}