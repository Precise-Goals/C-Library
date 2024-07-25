#include <stdio.h>

struct Employment {
    int code;
    char name[50];
};

int main()
{
    int n;
    struct Employment Slaves[100];
    // Structures can also be initialized as follows :
    // struct employee harry = { 100, 71.22, "harry" };
    // struct employee shubh = { 0 }; // All elements set to 0
    printf("How many entries you want to add : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the Name for new Entry: ");
        scanf("%s", &Slaves[i].name);
        printf("Enter the code for new Entry : ");
        scanf("%d", &Slaves[i].code);
        printf("\n");
    }
    for (int j = 0; j < n; j++) {
        printf("The code of an %s is %d\n", Slaves[j].name, Slaves[j].code);
    }

    return 0;
}