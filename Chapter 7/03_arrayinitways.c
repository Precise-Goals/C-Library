#include <stdio.h>

int main()
{
    int cgpa[3] = { 9, 8, 8 }; // allowed
    for (int j = 1; j <= 3; j++) {
        printf("The value of %d student is %d\n", j, cgpa[j - 1]);
    }
    return 0;
    // if integer takes 4 byte each then..
    // each integer will consume 4 byte if memory is such that 8256 then 8260 then 8264 will allote
}