/*
7. Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/
#include <stdio.h>

int LMAO(int);
int LMAO(int o) {

};

int main()
{
    int n = 3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            printf(" * ");
        }
        printf("\n");
    }
    int m = 3;
    for (int a = 0; a < m; a++) {
        for (int b = 0; b < 2 * a + 1; b++) {
            printf(" %d ",(2*a)+1);
        }
        printf("\n");
    }

    return 0;
}