#include <stdio.h>

int main()
{
    if (1)
    {
        printf("Hey, This command is executed\n");
    }
    if (1235123412)
    {
        printf("Hey, This command is also executed\n");
    }
    if ('a')
    {
        printf("Hey, This command is also executed\n");
    }
    if (12.21)
    {
        printf("Hey, This command is also executed\n");
    }
    if (0)
    {
        printf("Hey, This command is also executed\n"); // will not execute
    }

    return 0;
}