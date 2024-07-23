#include <stdio.h>

void Check(char string[], char c[])
{
    int a = 0;
    int flag;
    while (string[a] != '\0') {
        if (string[a] == c[0]) {
            flag = 1;
            break;
        } else {
            flag = 0;
        }
        a++;
    }
    if (flag == 1) {
        printf("Yes, The Character %s is present in string.\n", c);
    } else {
        printf("No, The Character %s is absent in string.\n", c);
    }
}

int main()
{
    /* 9. Write a program to check whether a given character is present in a string or not. */
    char string[] = "I DONT CARE..";
    char c[2];
    printf("Enter the Character you want to check : ");
    scanf("%s", c);

    Check(string, c);

    return 0;
}