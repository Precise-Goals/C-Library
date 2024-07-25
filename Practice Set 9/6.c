#include <stdio.h>

typedef struct complexNumber {
    int real;
    int img;
} cn;
cn Display(cn arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("The %d complex number is %d+%di\n", (i + 1), arr[i].real, arr[i].img);
    }
}
int main()
{
    /* 6. Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user */
    cn Complex[5];
    for (int a = 0; a < 5; a++) {
        printf("%d. real part = ", (a + 1));
        scanf("%d", &Complex[a].real);
        printf("   Imaginary part = ");
        scanf("%d", &Complex[a].img);
    }
    Display(Complex, 5);

    return 0;
}