#include <stdio.h>

int main()
{
    FILE* rptr;

    rptr = fopen("04r.txt", "r");
    char c = fgetc(rptr);
    printf("%c\n", c);
    fclose(rptr);

    FILE* wptr;
    wptr = fopen("04w.txt", "w");
    fputc('l', wptr);
    fclose(wptr);
    return 0;
}