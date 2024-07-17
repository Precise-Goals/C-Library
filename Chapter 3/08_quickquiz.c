#include <stdio.h>

int main()
{
    /*
    : Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F

    */
    int marks;
    printf("Enter the Student Marks: ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("Bro Passed with A Grade\n");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("Bro Passed with B Grade\n");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("Bro Passed with C Grade\n");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("Bro Passed with D Grade\n");
    }
    else if (marks >= 50 && marks <= 60)
    {
        printf("Bro Passed with E Grade\n");
    }
    else
    {
        printf("Bro failed with F Grade\n");
    }

    return 0;
}