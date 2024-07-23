#include <stdio.h>
#include <string.h>

int main()
{
    /* 2. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal. */
    char inp1[6];
    char inp2[6];
    printf("Input from c ");
    for (int i = 0; i < 5; i++) {
        scanf("%c", &inp1[i]);
    }
    inp1[5] = '\0';
    printf("Input from s ");
    scanf("%5s", inp2);

    if (strcmp(inp1, inp2) == 0) {
        printf("Both Strings are Same\n");
    } else {
        printf("Both Strings are Different\n");
    }

    return 0;
}