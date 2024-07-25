#include <stdio.h>

typedef struct Book {
    float salary;
    char name[15];
} b;
int main()
{
    /* 4. Take name and salary of two employees as input from the user and write them to
a text file in the following format:
       i. Name1, 3300
       ii. Name2, 7700 */
    FILE* Book;
    Book = fopen("04.txt", "a");
    b data[2];
    for (int i = 0; i < 2; i++) {
        printf("The Name and salary for %d. ", (i + 1));
        scanf("%s %f", &data[i].name, &data[i].salary);
    }
    for (int i = 0; i < 2; i++) {
        fprintf(Book, "%d. %s %.2f\n", (i + 1), data[i].name, data[i].salary);
    }
    fclose(Book);
    return 0;
}