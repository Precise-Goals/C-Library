#include <stdio.h>

int Factoral(int);
int Factoral(int m)
{
    if (m == 0 || m == 1) {
        return 1;
    }
    return Factoral(m - 1) * m; // once function return it will stop 
    // 5! = 5*4*3*2*1;
    // n! = 1*2*3.....n-1,n;
    // n-1! = 1*2*3......n-1;
    // n! = n-1! * n;
    // again m-1 gonna run
    // it will reach eventualy
    // m-2
    // till
    // m-m but its 0
};

int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    printf("The Factorial of %d is %d\n", a, Factoral(a));
    return 0;
}
// Functions which Call in itself is Recusrion
/*

1. Recursion is often a direct way to implement certain algorithms, but not
    always the most direct for every algorithm. Recursion is particularly suited for
    problems that can be divided into smaller, similar subproblems (like factorial
    computation or tree traversal), but for some algorithms, iterative approaches
    might be more straightforward or efficient.

2. The condition in a recursive function that stops further recursion is called
    the base case. This correction clarifies that the base case is crucial as it
    prevents infinite recursion and ensures the function terminates correctly.

3. Sometimes, due to an oversight by the programmer, a recursive function can
    continue to run indefinitely without reaching a base case, potentially
    causing a stack overflow or memory error. This statement highlights the risk of
    infinite recursion and its consequences, emphasizing the importance of properly
    defining base cases in recursive functions.
*/