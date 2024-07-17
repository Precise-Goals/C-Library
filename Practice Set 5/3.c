#include <stdio.h>

float force_of_attraction(int);
float force_of_attraction(int u)
{
    float g = 9.8;
    return u * g;
};

int main()
{
    /*
    Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
        earth. Consider g = 9.8m/s2.
    */
    int m;
    printf("Enter the mass 'm' of the Body : ");
    scanf("%d", &m);
    printf("The Force of Attraction on a Body is %.2f ", force_of_attraction(m));

    return 0;
}