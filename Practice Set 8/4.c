#include <stdio.h>

char* slice(char mod[], int a, int b)
{
    int i = 0;
    char* ptr1 = &mod[a]; // assign the ptr1 to position of a
    char* ptr2 = &mod[b]; // assing the ptr2 at position b

    mod = ptr1; // let mod start from ptr1 as it is pointing ath element
    mod[b] = '\0'; //  declare last b as \0

    return mod;
};

int main()
{
    /* 4. Write a function slice() to slice a string. It should change the original string such
    that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
    for slice. */
    char dom[] = "Experiment";
    printf("Original Sliced String is %s\n", slice(dom, 1, 5));
    return 0;
}