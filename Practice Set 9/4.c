#include <stdio.h>

typedef struct Ptr {
    int code;
} ptr;

int main()
{
    /* 4. Write a program to illustrate the use of arrow operator → in C */
    ptr e1;
    e1.code = 56;
    ptr* pointer = &e1;
    printf("The Value is %d\n", pointer->code);
    return 0;
}