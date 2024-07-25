#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* C is a language with some fixed rules of programming. For example: Changing the size
of an array is not allowed. Dynamic memory allocation is a way to allocate memory to a data structure during the
runtime. We can use DMA function available in C to allocate and free memory during
runtime.
    Following function are available in C to perform dynamic memory allocation:
    1. malloc()
    2. calloc()
    3. free()
    4. realloc() */
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    // float hota float * lete       //n -> no of elements
    //  malloc(n * sizeof(int)); how much size int takes in architecture and returns null pointer
    //  int arr[n]; // not allowed in c for allocation
    return 0;
}