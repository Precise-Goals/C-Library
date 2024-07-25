#include <stdio.h>
#include <string.h>

struct Employee {
    int code;
    char name[25];
    float salary;
};

void show(struct Employee e);
void show(struct Employee e)
{
    printf("The Salary of %s is %.2f with %d code of entry\n", e.name, e.salary, e.code);
}
int main()
{
    /* Complete this show function to display the content of employee. */
    struct Employee e1;
    e1.code = 6160;
    strcpy(e1.name, "Sarthak");
    e1.salary = 690000.00;
    show(e1);
    return 0;
}