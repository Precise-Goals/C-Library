#include <stdio.h>
#include <string.h>

struct Employees {
    char name[15];
    float salary;
};

int main()
{
    struct Employees y1, y2, y3;

    // Employee 1
    printf("Enter The Name of Employee 1: ");
    scanf("%s", y1.name);  // No need for &
    printf("Enter The Salary of Employee 1: ");
    scanf("%f", &y1.salary);  // Need & here
    printf("The Salary of %s is %.2f\n\n", y1.name, y1.salary);

    // Employee 2
    printf("Enter The Name of Employee 2: ");
    scanf("%s", y2.name);
    printf("Enter The Salary of Employee 2: ");
    scanf("%f", &y2.salary);
    printf("The Salary of %s is %.2f\n\n", y2.name, y2.salary);

    // Employee 3
    printf("Enter The Name of Employee 3: ");
    scanf("%s", y3.name);
    printf("Enter The Salary of Employee 3: ");
    scanf("%f", &y3.salary);
    printf("The Salary of %s is %.2f\n\n", y3.name, y3.salary);

    return 0;
}
