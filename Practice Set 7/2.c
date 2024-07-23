#include <stdio.h>

int main()
{
    /* If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
        (i) True.
        (ii) False.
        (iii) Depends. */

    /* (s+3) is a address not an element - False */
    

    int s[3] = { 1, 2, 3 };
    int* ptr = &s[0];
    printf("The element at first place is %d with location %d\n", *ptr, ptr);
    printf("The element at first place is %d with location %d\n", *(s + 3), ptr); // At +8 means third element 4,4..

    return 0;
}