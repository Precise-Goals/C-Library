#include <stdio.h>

char* Encrypt(char mod[])
{
    int i = 0;
    while (mod[i] != '\0') {
        mod[i]++;
        i++;
    }
    return mod;
}

int main()
{
    /* 6. Write a program to encrypt a string by adding 1 to the ascii value of its
characters. */
    char s[] = "Hello";
    printf("The original String is %s\n", s);
    printf("THe Encrypted by 1 string is %s \n", Encrypt(s));
    return 0;
}