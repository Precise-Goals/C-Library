#include <stdio.h>

int main()
{
    int m[] = { 12, 53, 87, 98 };

    int* ptr = m;
    // similr to below for pointing the first element
    // int* ptr = m[0];
    // ptr accessing the first element's address or pointing it

    for (int i = 0; i < 4; i++) {
        printf("The Marks at Index %d is %d\n", i, m[i]);
        printf("The Marks at Index %d is %d\n", i, *ptr);
        ptr++;  
    }

    return 0;
}