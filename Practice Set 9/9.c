#include <stdio.h>

typedef struct DaTe {
    int dd;
    int mm;
    int yyyy;
} d;

int Compare(d d1, d d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d1.mm) && (d1.dd = d2.dd)) {
        return 0;
    }
    if (d1.yyyy > d2.yyyy) {
        return 1;
    } else if (d1.yyyy < d2.yyyy) {
        return -1;
    } else if (d1.mm > d2.mm) {
        return 1;
    } else if (d1.mm < d2.mm) {
        return -1;
    } else if (d1.dd > d2.dd) {
        return 1;
    } else if (d1.dd < d2.dd) {
        return -1;
    }
}

int main()
{
    /* 9. Write a structure capable of storing date. Write a function to compare those dates.
       10. Solve problem 9 for time using ‘typedef’ keyword */
    d D1 = { 15, 11, 2902 };
    d D2 = { 23, 4, 3000 };
    printf("The Result of Comparision is %d\n", Compare(D1, D2));
    return 0;
}