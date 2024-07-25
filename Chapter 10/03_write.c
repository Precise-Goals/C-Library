#include <stdio.h>

int main()
{
    FILE* lmao;
    // lmao = fopen("03.txt", "w");
    // write mode overwrites the file by cleaning it first
    // use apend to adding
    lmao = fopen("03.txt", "a");
    int num = 1234;
    fprintf(lmao, "%d\n", num);
    printf("The num is %d\n", num);

    fclose(lmao); // good practice
    return 0;
}