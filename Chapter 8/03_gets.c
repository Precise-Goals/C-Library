#include <stdio.h>

int main()
{
    char s[5];
    gets(s);
    puts(s); // included newline
    printf("%s", s);
    return 0;
}