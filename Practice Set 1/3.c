#include<stdio.h>

int main(){
    int C;
    float F;

    printf("Enter the Tempearture in Celsius: ");
    scanf("%d", &C);

    F = ((9.0/5.0*C) + 32);

    printf("The Temperature in Faranheit: %f", F);
    return 0;
}