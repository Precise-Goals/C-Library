#include <stdio.h>

int main()
{
    /* : Modify the program above to check whether the file exists or not before
opening the file. */
    FILE* lmao;
    lmao = fopen("quickquiz.txt", "r");
    // lmao = fopen("01.txt", "r");
    if (lmao == NULL) {
        printf("File doesn't exists\n");
    } else {
        int num;
        fscanf(lmao, "%d", &num);
        printf("The num is %d\n", num);
        // file pointer moves as we kept reading this..
        fscanf(lmao, "%d", &num);
        printf("The num is %d\n", num);
    }

    fclose(lmao); // good practice
    return 0;
}