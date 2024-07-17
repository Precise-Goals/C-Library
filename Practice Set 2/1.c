/*
1. Which of the following is invalid in C?
    a. int a=1; int b = a;
    b. int v = 3*3;
    c. char dt = ‘21 dec 2020’;
ans - C 'char c' contains only one element
*/
#include <stdio.h>

int main()
{
    int a = 1;
    int b = a;
    int v = 3 * 3;
    char dt = '21 dec 2020'; // this galat
    return 0;
}