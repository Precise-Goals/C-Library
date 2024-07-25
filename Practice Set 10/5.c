#include <stdio.h>

int main()
{
    /* 5. Write a program to modify a file containing an integer to double its value. */
    int n;
    FILE* mod;
    FILE* dom;
    mod = fopen("05.txt", "r");
    fscanf(mod, "%d", &n);
    dom = fopen("05.txt", "w");
    fprintf(dom, "%d", n * 2);
    fclose(mod);
    fclose(dom);
    return 0;
}