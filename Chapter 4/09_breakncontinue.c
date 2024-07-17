#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++) {
        if (i % 4 == 0) {
            continue; // skip the iteration
        }
        if (i == 14) {
            break; // exit the Loop
        }
        printf("The i is %d\n", i);
    }

    return 0;
}