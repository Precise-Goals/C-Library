#include <stdio.h>

int main()
{
    int a = 5;
    int* ab = &a;
    printf("The Address of a is %u\n", ab);
    ab++;
    //  +4 increment due to 4byte size of char
    // jitna bytes is arhitecture me jo data type le raha ha us se increment hoga
    printf("The Address of a is %u\n", ab);

    char o = 'a';
    char* b = &o;

    printf("The Address of a is %u\n", b);
    b++;
    // +1 increment due to 1byte size of char
    printf("The Address of a is %u\n", b);

    return 0;
}