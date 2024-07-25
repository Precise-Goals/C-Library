#include <stdio.h>

struct employee {
    int code;
    char name[50];
    float salary;
};

int main()
{
    struct employee e1;
    struct employee* ptr;
    ptr = &e1;
    e1.code = 654;
    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);
    // noice

    return 0;
}