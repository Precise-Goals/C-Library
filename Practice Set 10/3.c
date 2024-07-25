#include <stdio.h>

int main()
{
    /* 3. Write a program to read a text file character by character and write its content
twice in separate file */
    FILE* tra;
    FILE* rec;
    tra = fopen("transmitter.txt", "r");
    rec = fopen("reciever.txt", "w");
    while (1) {
        char c;
        c = fgetc(tra);
        fprintf(rec, "%c", c);
        if (c == EOF) {
            break;
        }
    }
    fclose(tra);
    fclose(rec);
    return 0;
}