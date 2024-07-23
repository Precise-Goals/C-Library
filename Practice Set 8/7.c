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
char* Decrypt(char jod[])
{
    int a = 0;
    while (jod[a] != '\0') {
        jod[a]--;
        a++;
    }
    return jod;
}

int main()
{
    /* 6. Write a program to encrypt a string by adding 1 to the ascii value of its
    characters. 7. Write a program to decrypt the string encrypted using encrypt function in
    problem 6.*/
    char s[] = "Hello";
    printf("The original String is %s\n", s);
    printf("THe Encrypted by 1 string is %s \n", Encrypt(s));
    printf("THe Decryption of Encryption is %s \n", Decrypt(s));
    return 0;
}