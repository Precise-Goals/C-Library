#include <stdio.h>

int main()
{
    char ch;
    FILE* ptr;
    ptr = fopen("05.txt", "r");
    while (1) {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF) {
            printf("\n________\nThe file Has been Ended\n");
            break;
        }
    }

    return 0;
}