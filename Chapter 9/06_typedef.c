#include <stdio.h>

typedef struct Complex {
    float real;
    float img;
} Entry;

int main()
{
    typedef float Siliconvalley;
    Siliconvalley h = 9675948.00;
    printf("the Network of avg employe in siliconvalley is %.2f\n", h);
    Entry c1, c2;
    c1.img = 56;
    c1.real = 21;
    printf("the Complex no is %.0f+%.0fi\n", c1.real, c1.img);
    return 0;
}