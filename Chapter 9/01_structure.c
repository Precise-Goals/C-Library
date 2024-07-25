#include <stdio.h>
#include <string.h>

struct Employee {
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon important

int main()
{
    struct Employee e1, e2;
    strcpy(e1.name, "Harry");
    e1.salary = 5000.00;
    e1.code = 6016;

    printf("Salary - %s\n", e1.name);
    printf("Salary - %.2f\n", e1.salary);
    printf("Salary - %d\n", e1.code);

    return 0;
}