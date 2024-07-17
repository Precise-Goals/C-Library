// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
/*
65 - 90 Upper Case
97 - 122 Lower Case
*/

#include <stdio.h>

int main()
{
    char cha;
    printf("Enter any alphabelt Character: ");
    scanf("%c", &cha);
    printf("The Character is %c\n", cha);
    printf("The Value of Character is %d\n", cha);

    if (cha >= 97 && cha <= 122) {
        printf("The Character %c is the Lowercase Character\n", cha);
    } else {
        printf("The Character %c is not Lowercase Character\n", cha);
    }

    return 0;
}