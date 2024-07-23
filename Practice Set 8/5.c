#include <stdio.h>

char* strcpy(char tar[], char source[])
{
    char* ptr = source;
    tar = ptr;
    return tar;
}

int main()
{
    /* 5. Write your own version of strcpy function from <string.h> */
    char st[] = "Welcome to my Loneliness";
    char tar[25];
    printf("The Target String is %s\n", strcpy(tar, st));
    return 0;
}