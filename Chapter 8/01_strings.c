#include <stdio.h>

int main()
{
    char st[] = { 'a', 'b', 'c', '\0' };
    // A null character is used to denote the termination of a string
    // fullstop ki tarah
    // \0 is null character
    for (int i = 0; i < 3; i++) {
        printf("%c", st[i]);
    }
    printf("\n");
    char sa[] = "Sarthak";
    for (int j = 0; j <= 7; j++) {
        printf("character is %c\n", sa[j]);
    }
    printf("\n");

    // char takes 1 byte in c
    // using double quote
    // \0 null character automatically
    printf("The First Character is %c\n", st[0]);
    printf("The name is %s\n", sa);
    return 0;
}