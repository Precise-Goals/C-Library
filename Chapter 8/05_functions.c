#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n");

    /* Finding Length of String */
    char st[] = "Sarthak";
    printf("%d is the length of String\n", strlen(st));
    // length excluding Null Character...

    printf("\n");

    /* Copying string to Target */
    char Target[7];
    strcpy(Target, st);
    printf("The Source String is %s\n", st);
    printf("The Target String is %s\n", Target);

    printf("\n");

    /* Concatenate the Two Strings Together */
    char Concate[13] = "Sarthak";
    char sur[] = "Patil";
    printf("%s \n", strcat(Concate, sur));
    // Concatenates without Spaces

    printf("\n");

    /* Comaparing the Strings */
    char one[] = "AIRIZONA";
    char two[] = "FLORIDA";
    char three[] = "AIRIZONA";
    printf("The Result of Comparison is %d \n", strcmp(one, two));
    printf("The Result of Comparison is %d \n", strcmp(three, one));
    printf("The Result of Comparison is %d \n", strcmp(two, three));
    // if comparison has true / if it is same then it returns 0 value 
    // if First string is Bigger than second string then it returns positive value 
    // if secon string is bigger than first string then it returns negative value.


    return 0;
}