#include <stdio.h>
typedef struct complexNumber {
    int real;
    int img;
} cn;

int main()
{
    /* 5. Write a program with a structure representing a complex number. */
    cn com;
    com.real = 21;
    com.img = 43;
    printf("The Complex Number is %d+%di\n", com.real, com.img);
    printf("Real Part is %d\n", com.real);
    printf("Imginary Part is %di\n", com.img);
    return 0;
}