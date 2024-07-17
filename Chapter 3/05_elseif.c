#include <stdio.h>

int main()
{
    int age = 45;
    if (age > 60)
    {
        printf("You can Drive And You are a Senior Citizen\n");
    } // if this condition becomes true it wont check other conditions
    else if (age > 40)
    {
        printf("You can Drive and You are Elder\n");
    } // if this condition becomes true it wont check other conditions
    else if (age > 18)
    {
        printf("You can Drive \n");
    } // if this condition becomes true it wont check other conditions
    else // optional
    {
        printf("You cannot Drive\n");
    }

    return 0;
}