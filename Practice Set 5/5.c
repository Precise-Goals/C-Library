#include <stdio.h>

int main()
{
    /*
    What will the following line produce in a C program:
        int a = 4;
        printf("%d %d %d \n", a, ++a, a++);
    */
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 4 5 5
    // but it is 6 6 4 due to evaluation order
    // Same then right to left
    
    return 0;
}