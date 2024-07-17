#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the Four Numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d) {
        printf("the Greatest Number is %d\n", a);
    } else if (b > a && b > c && b > d) {
        printf("the Greatest Number is %d\n", b);
    } else if (c > a && c > b && c > d) {
        printf("the Greatest Number is %d\n", c);
    } else {
        printf("the Greatest Number is %d\n", d);
    }

    return 0;
}