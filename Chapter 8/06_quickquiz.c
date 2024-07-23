#include <stdio.h>

int main()
{
    /* Create a string using double quotes and print its content using a loop. */
    char string[] = "I wanna be Yours...";
    int a = 0;
    while (string[a] != '\0') {
        printf("%c", string[a]);
        a++;
    }

    return 0;
}